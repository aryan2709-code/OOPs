#include<iostream>
using namespace std;

class Final{
    private:
    Final()
    {
      cout << "Final Class Constructor \n";
    }
    friend int main();
};

class Derived:public Final{

};

int main()
{
    Final f; // Allowed
    // Derived d;  //Will cause compile-time error
    return 0;
}