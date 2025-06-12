#include<iostream>
using namespace std;

class complex{
    private:
    double real;
    double imag;
    public:
    //define constructor 
    complex(double r = 0.0 , double i = 0.0) : real(r) , imag(i) {}
    // A overloaded method to compare two complex numbers
    bool operator ==(complex obj)
    {
        return (real == obj.real && imag == obj.imag);
    }
};

int main(){
    //a complex object
    complex com1(3.0,0.0);
    if(com1 == 3.0)
    cout << "Same";
    else
    cout << "Not same";

    return 0;
}

// The output is "same" because 3.0 implicitly gets converted to a complex object , 3.0 acts as the first parameter for the complex object constructor and
// default value of 0.0 is used for the second parameter , and hence the answer comes out to be true. Note that , had there been no default parameter for 
//the second argument , the the complier would have thrown an error .