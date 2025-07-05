#include<iostream>
using namespace std;

class Engine{
    public:
    Engine()
    {
        cout << "Engine was created"<<endl;
    }
    ~Engine()
    {
        cout << "Engine was destroyed"<<endl;
    }
};

class Car{
    private:
    Engine engine; // Composition : Engine is a part of car , stored by value , not by reference
    public:
    Car()
    {
        cout << "Car was created\n";
    }
    ~Car()
    {
        cout << "Car was destroyed\n";
    }
};

int main()
{
    cout << "Creating a Car Object\n";
    Car myCar;

    cout << "car is running!"<<endl;

    cout << "Exiting main Function\n";
    return 0;
}

// Demonstration Of Composition:
// the engine object is not created separately , it is constructed as a part of the car , when the car is destroyed , the engine is automatically destroyed too,
// This shows strong ownership

// other points:

// Construction : Engine -> Car : Member variables are initialised first
// Destruction :  Car -> Engine : Destructors called in reverse order
// It ensures safe cleanup of resources , The outer object car can perform cleanup logic before its sub-objects are destroyed.