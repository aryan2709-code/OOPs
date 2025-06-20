#include<iostream>
using namespace std;

class Base{
    private:
    virtual void secret()
    {
        cout << "Base Secret \n";
    }
    public:
    void callsecret()
    {
        secret(); // calls base :: secret , or the overridden version
    }
    virtual ~Base() {}
};

class Derived: public Base{
    private:
    void secret() override{
        cout << "Derived secret \n";
    }
};

int main()
{
    Derived d;
    Base* ptr = &d;
    ptr->callsecret();   // o/p : Derived secret

    //ptr->secret(); // Not allowed , it is set as private in base and the pointer is of base type
    return 0;
}