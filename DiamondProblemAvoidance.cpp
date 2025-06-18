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
    obj.x = 42;  // No ambiguity!
    cout << obj.x << endl;  // 42
}
