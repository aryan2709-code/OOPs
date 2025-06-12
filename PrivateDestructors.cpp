#include<iostream>
using namespace std;

class A{
private:
~A(){
    cout << "Destructor Called \n";
}
public:
static A* create(){
    return new A();
}
void destroy(){
    delete this; // allowed because it is a class member
}

};

int main() {
    A* obj = A::create();
    A* obj2 = new A();
    cout << "Obj2 can be created in this manner also.";
    obj->destroy();
    obj2->destroy();


    // Object cannot be created using A obj; because the compiler will need to call the detsructor but since it is private , it will throw an error 
    return 0;
}