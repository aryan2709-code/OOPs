#include<iostream>
using namespace std;
class base{
    public:
    virtual ~base() {cout << "Base destroyed"<<endl;}
};

class derived: public base{
    public:
    ~derived() {cout << "Derived Destroyed!!"<<endl;}
};

int main()
{
    base* b = new derived();
    delete b;   // o/p : Derived destroyed , base destroyed
    return 0;
}