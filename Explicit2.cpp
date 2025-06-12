#include<iostream>
using namespace std;
class complex{
    private:
    double real;
    double imag;
    public:
    explicit complex(double r=0.0 , double i=0.0):real(r), imag(i) {}

    bool operator==(complex obj)
    {
        return (real == obj.real && imag == obj.imag);
    }

};

int main()
{
    complex c1(3.0,0.0);
    if(c1 == (complex)(3.0)) // Casted Explicitly 
    cout << "Same" << endl;
    else
    cout << "Not same"<<endl;

    return 0;
}