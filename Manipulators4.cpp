#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 42;

    // Align output to the left
    cout << left << setw(10) << n << endl;

    // Align output to the right
    cout << right << setw(10) << n << endl;

    // Show positive sign for numbers
    cout << showpos << n << endl;

    // Don't show positive sign for numbers
    cout << noshowpos << n;

    return 0;
}