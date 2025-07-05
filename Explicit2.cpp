#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    bool operator==(const Complex& obj) const {
        return (real == obj.real && imag == obj.imag);
    }
};

int main() {
    Complex c1(3.0, 0.0);
    if (c1 == (Complex)(3.0)) // ✅ Explicit cast
        cout << "Same" << endl;
    else
        cout << "Not same" << endl;

    return 0;
}
