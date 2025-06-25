#include<iostream>
using namespace std;

class Base{
public:
void display()
{
    cout << "Base display()" << endl;
}
void display(int x)
{
    cout << "Base display(int): "<<x<<endl;
}
};

class Derived:public Base{
    public: 
    using Base::display; // Unhides all Base::display overloads

    void display() // Hides the Base::display() implementation again because you are using the exact sam efunction signature as in the base class 
    {
     cout << "Derived Display()" <<endl;
    }
};

int main()
{
    Derived d;
    d.display();
    d.display(42); // Calls Base::display(int) - because of using 
    return 0; 
}