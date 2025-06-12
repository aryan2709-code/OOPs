#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void move() = 0;
};

class car : public vehicle{
public:
void move() override{
    cout << "Car moves on the road!"<<endl;
}
};

class airplane : public vehicle{
    public:
    void move() override{
        cout << "Airplane flies in the sky!"<<endl;
    }
};

int main()
{
    vehicle* v1 = new car();
    vehicle* v2 = new airplane();
    v1->move();
    v2->move();
    return 0;
}