#include<iostream>
using namespace std;

class Vehicle{
public:
Vehicle()
{
    cout << "The Vehicle Object was created"<<endl;
}
};

class car: public Vehicle{
public:
car()
{
    cout << "The car object was created" << endl;
}
};

int main()
{
    car c1; // creating a car object will invoke both the constructors ,first base class constructor , then its own constructor 
    return 0;
}