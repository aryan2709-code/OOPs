#include<iostream>
using namespace std;
class Animal{ // as this class contains a pure virtual function , it will be considered abstract
public:
virtual void speak() = 0;
};

class dog : public Animal{
public:
void speak() override{
    cout << "Dog speaks woof!!"<<endl;
}
};

class cat : public Animal{
    public:
    void speak() override{
        cout << "Cat speaks meow!!";
    }
};

int main()
{
   // Animal a; , This will throw error because abstract classes cannot be instantiated
   Animal* doggy = new dog();
   Animal* pussy = new cat();
   doggy->speak();
   pussy->speak();
return 0;
}