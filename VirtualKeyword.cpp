#include<iostream>
using namespace std;
class Base{
public:
virtual void speak(){
    cout << "Speaking from base class.";
}
};
class Derived : public Base{
    public:
    void speak() override{
        cout << "Speaking from derived class.";
    }
};

int main(){
    // Base class pointer
    Base* b;
    //derived class object
    b = new Derived();

    b->speak();
    return 0;
    
}