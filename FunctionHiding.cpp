#include<iostream>
using namespace std;
class Base{
    public:
    void show()
    {
        cout << "Base::show \n";
    }
};

class Derived:public Base{
    public:
    void show() // This is Function hiding , hides base::show()
    {
        cout << "Derived::show \n";
    }
};

int main()
{
    Base* b = new Derived(); // base class pointer attached to derived class object 
    b->show(); //o/p : Base::show 
    // Even though the object attached to the base class pointer was of derived type , still the method which gets called is of base class, this happens
    //because base::show() is not virtual and C++ chooses the function to call at compile time based on the static type of the pointer,i.e Base*, no 
    //polymorphism is used here , static dispatch is involved here(no vTable Use) and base::show() is called
    // Even though b points to a derived class object , c++ does not care here , it only looks at the type of pointer(Base*)  because show() is not virtual
    // If there were no show method in the base class , then the line b->show() would have lead to a compile-time error.
    Derived d;
    d.show(); //o/p : Derived::show
    return 0;
}