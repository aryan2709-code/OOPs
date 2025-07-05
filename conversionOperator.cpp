#include<iostream>
using namespace std;

class Fraction{
private:
int num;
int den;
public:
Fraction(int n = 0 , int d = 1 ) : num(n) , den(d) {} //Constructor initializer list 

// conversion operator
operator float() const{
    return float(num) / float(den);
}
};

int main()
{
    Fraction f(2 , 4);
    float val = f;  // Implicitly calls f.operator float()
    cout << val;
    return 0;
}