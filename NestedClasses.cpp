#include<iostream>
using namespace std;

class Laptop{
    private:
    string model;
    public:
    Laptop(string m): model(m) {}
    void showModel()
    {
        cout << "Laptop Model: "<<model<<endl;
    }

    // Nested Class
    class Battery{
     private:
     int capacity;
     public:
     Battery(int cap):capacity(cap){}
     void showCapacity()
     {
        cout << "The Battery Capacity is: "<<capacity<<" mAh"<<endl;
     }
    };
};

int main()
{
    Laptop myLaptop("MacBook Air");
    myLaptop.showModel();

    // Create nested class object like this
    Laptop::Battery myBattery(5000);
    myBattery.showCapacity();
    return 0;
}