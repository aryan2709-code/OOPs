#include<iostream>
using namespace std;

int add(int a , int b)
{
    return a+b;
}
int add(int a , int b , int c)
{
    return a+b+c;
}
double add(double a , double b)
{
    return a+b;
}
double add(double a , int b)
{
    return a+b;
}

int main()
{
    int a = 5 , b= 6 , c = 7;
    double e = 13.0 , f = 63.0;

    cout << add(a,b) << " " << add(a,b,c) << " " << add(e,f) << " " << add(e,c) << " " << endl;
    return 0;
}