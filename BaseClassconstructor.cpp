#include<iostream>
using namespace std;

class Base{
    public:
    Base(int x)
    {
        cout << "Base constructor : " << x << endl;
    }
};

class Derived:public Base{
    public:
    Derived(int y):Base(y) {
        cout << "Derived Constructor : "<<y<<endl;
    }
};

int main() 
{
    Derived d(6);
     Base b(5);
    return 0;
}