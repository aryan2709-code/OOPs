#include<iostream>
using namespace std;
class base{
    public:
    virtual void print()
    {
        cout << "base:: print() \n";
    }
};

class derived: public base{
    private:
    virtual void print() override{
        cout<<"Derived::print() \n";
    }
};

int main()
{
    base* b_ptr = new derived();
    b_ptr->print();  // Calls derived::print() even though it is private
    delete b_ptr;
}


// What's happening here :
// The print method of the base class is public and virtual, The print method of the derived class overrides the base class method but is private , you call 
// print throught the base class pointer and it is visible there, i.e print is public in base class , polymorphism kicks in ans the call is dynamically dispatched 
// using the vtable , and the actual function called is derived::print() 

// Main crux:
// Even though derived::print() is private , it is allowed because access checks are done at complile time and print is public in base
// Access control is based on the static type (base* ) - the call is valid
// virtual dispatch at runTime does not care about these access specifiers 