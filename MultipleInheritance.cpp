#include<iostream>
using namespace std;

class waterVehicle{
public:
waterVehicle()
{
    cout << "A waterVehicle was created"<<endl;
}
};

class landVehicle{
    public:
    landVehicle()
    {
        cout << "A Land Vehicle was created"<<endl;
    }
};

class amphibiousVehicle : public landVehicle, public waterVehicle{
public:
amphibiousVehicle()
{
  cout << "An amphibious vehicle was created "<<endl;
}
};

int main()
{
    amphibiousVehicle a;
    return 0;
}