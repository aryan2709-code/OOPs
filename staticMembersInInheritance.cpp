#include<iostream>
using namespace std;

class Base{
    public:
    static int count; //declaration inside the class , no memory allocated to this static member as of now
};

int Base::count = 0; // definition and optional initialisation leads to the memory allocation , henece avoiding linker errors 
class Derived:public Base{};

int main()
{
    Base::count = 5;
    cout << Derived::count << endl; // o/p : 5
    Derived::count++;
    cout << Base::count<<endl; // o/p : 6
    return 0;
    // Both base::count and derived::count point to the same memory location 
}