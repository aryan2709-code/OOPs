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
}

// Working Of Function Hiding 
// If a  derived class declares a function (even with different parameters) that has the same name as a function in the base class , then all overloaded
// versions of that function in the base class become hidden in the derived class scope.

