#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle()
    {
        cout << "This is a vehicle object" << endl;
    }
};

class FourWheelerVehicle: public Vehicle{
    public:
    FourWheelerVehicle()
    {
        cout << "This is a four wheeler object"<< endl;
    }
};

class car : public FourWheelerVehicle{
    public:
    car()
    {
        cout << "This is a car object being created"<<endl;
    }
};

int main()
{
    car c;
    return 0;

    // o/p of the program :
//     This is a vehicle object
// This is a four wheeler object
// This is a car object being created
}