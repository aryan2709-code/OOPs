#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Output a new line and flush the stream
    cout << "Hello" << endl;

    // Set width to 10 for the next output
    cout << setw(10) << 42 << endl;

    // Set precision to 3 for floating-point numbers
    cout << setprecision(3) << 3.14159 << endl;

    // Use fixed-point notation
    cout << fixed << 3.14159 << endl;

    // Use scientific notation
    cout << scientific << 3.14159 << endl;

    // Show the decimal point even for whole numbers
    cout << showpoint << 42.0;

    return 0;
}

// o/p:
// Hello
//         42
// 3.14
// 3.142
// 3.142e+00
// 4.200e+01