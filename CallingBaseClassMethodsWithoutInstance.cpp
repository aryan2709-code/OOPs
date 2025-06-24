#include<iostream>
using namespace std;

class base{
    public:
    void show()
    {
        cout << "Show Base Class \n";
    }
};

class derived:public base{
    public:
    void display()
    {
        base::show();
    }
};

int main()
{
    derived d;
    d.display(); //o/p:Show Base Class
    // In the above line , we indirectly called the base class method without creating a base class instance
    return 0;
}