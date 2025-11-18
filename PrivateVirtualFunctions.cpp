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

/*
This program demonstrates that private virtual functions can still participate
in polymorphism in C++. The Base class has a private virtual function 'secret()'
which is overridden privately inside Derived. Although 'secret()' cannot be called
directly through a Base pointer (because it is private in Base), the Base class
provides a public wrapper 'callsecret()' that invokes 'secret()'. Since 'secret()'
is virtual, the call made inside 'callsecret()' is dispatched to Derived::secret()
when the Base pointer actually refers to a Derived object. This shows that access 
specifiers affect only who can call the function directly, not how virtual 
dispatch works.
*/
