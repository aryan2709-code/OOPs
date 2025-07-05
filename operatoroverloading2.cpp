#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imag;

    public:
    complex(int r=0, int i=0): real(r),imag(i) {}

    void print()
    {
        cout << real << " + "<<imag<<"i"<<"\n";
    }

    friend complex operator+(const complex& obj1 , const complex& obj2);
    
};

complex operator+(const complex& obj1 , const complex& obj2)
{
    return complex(obj1.real + obj2.real , obj1.imag + obj2.imag);
}

int main()
{
    complex c1(10,5) , c2(5,10);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}