#include<iostream>
using namespace std;

class Animal{
public:
string name;
Animal(string name):name(name) {}
void speak()
{
    cout << name << " makes a sound." << endl;
}
};

class Dog: public Animal{
    public:
    string breed;
    Dog(string name,string breed) : Animal(name),breed(breed) {}
    void speak()
    {
        cout << name << " the" << breed << " barks!" << endl;
    }
};

int main()
{
    Dog d("Bruno" , "Labrador");
    Animal a = d; // Object slicing happens here , we are trying to assign a dog object (bigger in size) to an animal object(smaller), only
    // the animal part gets copied
    a.speak(); // o/p : Bruno makes a sound.
    return 0;
}