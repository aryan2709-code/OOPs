#include<iostream>
using namespace std;

class Base{
    public:
    void display()
    {
        cout << "Base display()"<<endl;
    }
    void display(int x)
    {
        cout << "Base display(int)" << x <<endl;
    }
};

class Derived:public Base{
    public:
    void display() // Hides both Base::display() ansd Base::display(int)
    {
      cout << "Derived Display()"<<endl;
    }
};

int main()
{
    Derived d;
    d.display(); // calls Drived::display()

    // d.display(10); // error : base::display(int) is hidden
    d.Base::display(10); // Works fine 
}

// Working Of Function Hiding 
// If a  derived class declares a function (even with different parameters) that has the same name as a function in the base class , then all overloaded
// versions of that function in the base class become hidden in the derived class scope.

// Important :
// even without using the "using" keyword , you can still call the base class functions , but only through explicit scope resolution , i.e d.Base::display(10),
// So , hiding doesn't mean they are deleted , it just means that the derived class scope won't see them automatically , you must qualify them with base class name

