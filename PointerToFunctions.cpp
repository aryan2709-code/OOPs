// This program demonstrates how you can define pointers to functions and can invoke functions using pointers

#include <iostream>
using namespace std;

// Write a function definition
int returnInt()
{
    return 10;
}

int returnParamInt(int x , int y)
{
    return x+y;
}

int main()
{
    // Pointer to returnInt()
    int (*fptr1) ();
    int (*fptr2) (int , int);

    // assign them to the intended functions
    fptr1 = returnInt;
    fptr2 = returnParamInt;

    //call the functions using parameters
    cout<<fptr1()<<endl;
    cout<<fptr2(10,20)<<endl;
    return 0;
}