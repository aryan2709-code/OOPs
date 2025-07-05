#include<iostream>
using namespace std;

class student{
    const int rollNumber; //const member , must be initialized once
    string& collegeName; // reference , must be bound at initialization

    public:
    student(int roll , string& college) : rollNumber(roll) , collegeName(college) {}

    void print()
    {
        cout << "Roll Number: "<<rollNumber<<endl;
        cout << "College: " << collegeName << endl;
    }
};

int main()
{
    string clg = "IIT BOMBAY";
    student s1(101 , clg);
    s1.print();

    cout << "clg variable changed \n";
    clg = "IIT DELHI"; //will reflect in s1 because collegeName is a reference
    s1.print();
    return 0;
}

// since collegeName is a reference , it must be bound to an existing string , once bound , it cannot change what it refers to , now the existing string's 
//variable name and the member reference variable name's are alias to each other , i.e changing one will impact both (they point to same memory location)