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
shared_ptr<A> aptr;
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->bptr = b; // A owns B
    b->aptr = a; // B owns A

    return 0;
}

// The Problem:
// a owns an object of type A, b owns an object of type B, a->bptr owns B , b->aptr owns A
// Even after main() finishes, a goes out of scope => reference count on A should become zero, but B still holds a shared_ptr to A => ref_count is still 1,
// b goes out of scope => reference count on B should become zero, but A still holds a shared_ptr to B , ref count is still 1

// So, neither object gets deleted , They are stuck forever in the memory, even though no one in the program is using them anymore. This is a memory leak 
//- memory that is allocated but never freed.