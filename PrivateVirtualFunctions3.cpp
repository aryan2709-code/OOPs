#include<iostream>
using namespace std;
class base{
virtual void printme()
{
    cout << "Base class calling printme() function \n";
}
public:
void show()
{
    printme(); 
}
};

class derived:public base{
void printme() override{
    cout << "Derived class calling printme()\n";
}
};

int main()
{
    derived d;
    d.show();
}

// What's happening in this program , the virtual method is private in both the base as well as the derived class , but we have a public method in the base 
//class that indirectly calls the private virtual method
//d.show() is public → it internally calls printMe(), and polymorphism ensures Derived::printMe() is called if the object is of Derived.

// This is a classic NON VIRTUAL INTERFACE pattern : define a public non virtual function in base that calls a private virtual function.

// Access control is compile time , but dispatch is runtime as long as you are allowed to call the base class version , the correct derived version will 
//run even if it is private 