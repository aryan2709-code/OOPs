#include<iostream>
using namespace std;

class Vehicle{
  public:
  int speed;
  void move()
  {
    cout << "Moving at Speed : "<<speed<<endl;
  }  
};

class Car: public Vehicle{};
class Bike: public Vehicle{};

int main()
{
    // We have extracted the common features out of the classes car and bike and generalised them into a general class called Vehicle
    Vehicle v;
    Car c;
    Bike b;
    return 0;
}