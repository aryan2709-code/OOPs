#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Using const is necessary here, because in the if condition, we are doing if (c1 == (Complex)(3.0))
    // Here, (Complex)(3.0) creates a temporary object, an object that lives only for that line of code
    // In C++, a standard reference Complex& is not allowed to point to a temporary object
    // The compiler thinks, You asked for a reference that allows modification but this object is about to vanish,so i won't let 
    // you do it

    // You need to promise the compiler that you are not willing to make any changes through this reference
    // This can be done by adding the const keyword to the argument
    bool operator==(const Complex& obj) {
        return (real == obj.real && imag == obj.imag);
    }
};

int main() {
    Complex c1(3.0, 0.0);
    if (c1 == (Complex)(3.0)) //Explicit cast
        cout << "Same" << endl;
    else
        cout << "Not same" << endl;

    return 0;
}
