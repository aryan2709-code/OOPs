// If we do not want unintended behaviour due to implicit conversions , the best strategy is to use explicit keyword along with constructor 

#include<iostream>
using namespace std;
class complex{
    private:
    double real;
    double imag;
    public:
    explicit complex(double r=0.0,double i=0.0) : real(r),imag(i) {} //constrcutor marked as explicit 

    bool operator==(complex obj)
    {
    return (obj.real == real && obj.imag == imag);
    }
};

int main()
{
    complex com1(3.0,0.0);
    if(com1 == 3.0) // Throws error
    
    return 0;
}