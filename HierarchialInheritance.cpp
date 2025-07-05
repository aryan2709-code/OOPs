#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle"<< endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car"<< endl;
    }
};

class Bus : public Vehicle {
public:
    Bus() {
        cout << "This Vehicle is Bus"<< endl;
    }
};

int main() {
    
    // Creating object of sub class will
    // invoke the constructor of base class.
    Car obj1;
    Bus obj2;
    return 0;
}