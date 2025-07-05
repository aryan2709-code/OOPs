// Object slicing plus Polymorphism
#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound()
    {
        cout << "Animal makes a sound!"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override{
        cout << "Dog Barks!"<<endl;
    }
};

int main()
{
    Dog d;
    Animal a = d; // Object slicing occurs here
    a.sound(); // o/p : animal makes a sound! No polymorphism
    return 0;
}