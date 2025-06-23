#include<iostream>
using namespace std;

// Base class 1
class person{
public:
void showperson()
{
    cout << "I am a person \n";
}
};

class employee{
    public:
   void showemployee()
   {
    cout << "I am an employee \n";
   }
};

// Derived class from person - hierarchial inheritance
class student:public person{
public:
void showstudent()
{
    cout << "I am a student \n";
}
};

// Final derived class -> hybrid Inheritance
class researchStudent:public employee,public student{
    public:
    void showresearchstudent()
    {
        cout << "I am a research student \n";
    }
};

int main()
{
    researchStudent r;
    r.showperson(); // Inherited from person via student
    r.showemployee(); // Inherited from employee
    r.showstudent(); // Inherited from student
    r.showresearchstudent(); // Defined in itself 
    return 0;
}