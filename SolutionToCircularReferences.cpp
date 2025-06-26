#include<iostream>
#include<memory>
using namespace std;

class B; // Forward declaration
class A{
public:
shared_ptr<B> bptr;
};

class B{
public:
  weak_ptr<A> aptr; //og code : shared_ptr<A> aptr;
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->bptr = b; // A owns B
    b->aptr = a; // B owns A

    return 0;
}
