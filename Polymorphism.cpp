#include<iostream>
#include<vector>
using namespace std;

class Animal{
    public:
    // General speak method made virtual so that it can be overridden by derived classes
    virtual void speak()
    {
        cout << "Animal is speaking." << endl;
    }
};

class Dog: public Animal{
    public:
    void speak() override{
        cout << "Dog speaks woof woof !"<<endl;
    }
};

class Cat : public Animal{
    public : 
    void speak() override{
        cout << "Cat speaks meow meow !" <<endl;
    }
};

class Lion : public Animal{
public:
void speak() override{
    cout << "Lion doesn't speak , it roars!" << endl;
}
};

int main()
{
    vector<Animal*> zoo;
    zoo.push_back(new Cat()); // new Cat() returns a pointer of type Cat , but it is upcasted to a pointer of type animal , because cat class is derived 
    //from animal only , and the compiler does not throw an error when we try to store a pointer of type cat in a array of animal type pointers
    zoo.push_back(new Lion());
    zoo.push_back(new Dog());

    for(auto animal : zoo)
    {
        animal->speak();
    }
    return 0;
}