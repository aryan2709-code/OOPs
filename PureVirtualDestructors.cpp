#include<iostream>
using namespace std;

class Abstract{ //class is abstract because of the presence of a pure virtual destructor
    public:
    virtual ~Abstract() = 0;

};

Abstract::~Abstract()  // must be defined
{
    cout << "Abstract destructor was called.\n";
}

class Concrete:public Abstract{
public:
~Concrete()
{
    cout << "Concerete destructor was called.\n";
}
};

int main()
{
    Abstract* obj = new Concrete();
    delete obj;
}

// o/p:
// Concerete destructor was called.
//Abstract destructor was called.