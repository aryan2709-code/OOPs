#include<iostream>
using namespace std;

class Base{
public:
Base()
{
    cout << "Base Class constructor is called.\n";
}
~Base()
{
    cout << "Base Class destructor is called.\n";
}
};

class Derived:public Base{
public:
Derived()
{
    cout <<"Derived Class constructor was called.\n";
}
~Derived()
{
    cout<<"Derived Class destructor was called.\n";
}
};

int main()
{
    Base* b = new Derived();
    // Base class constructor is called and that too before the derived class constructor , whenever a derived object is created , it contains 
    //both - the base part as well as the derived part , and since the base part of the object must be constructed before the derived part , the base class
    // constructor is called first.
    delete b;
     // Only base class destructor is called , so resource leakage happens because of derived class destructor not being called.
    return 0;
}