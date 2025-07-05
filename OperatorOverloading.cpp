#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imag;
    public:
    complex(int r=0,int i=0) : real(r) , imag(i) {}

    // This is automatically called when + is called between two complex objects
    complex operator+(complex& obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void print()
    {
        cout << real << " + "<<imag<<"i"<<"\n";
    }
   

};

int main()
{
    complex c1(10,4);
    complex c2(27,39);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}