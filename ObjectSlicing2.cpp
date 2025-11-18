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


/*
This program demonstrates object slicing and the loss of polymorphism.

- Animal has a virtual function sound().
- Dog overrides sound().
- In main(), the line "Animal a = d;" causes object slicing:
      Only the Animal part of d is copied into a.
      The Dog-specific part is discarded.
- Because 'a' is now a pure Animal object (not a Dog),
      a.sound() calls Animal::sound() instead of Dog::sound().
- This shows that polymorphism works only through references or pointers,
      not through objects passed or assigned by value.
*/
