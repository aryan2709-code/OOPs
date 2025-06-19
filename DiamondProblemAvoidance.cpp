#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};  // One shared A

int main() {
    D obj;
    obj.x = 42;  // No ambiguity! , //Another method to access can be obj.A::x = 43, it is also used in use cases where we want to be more specific
    cout << obj.x << endl;  // 42 
}
