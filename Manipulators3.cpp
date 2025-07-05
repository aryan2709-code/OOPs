#include <iostream>
using namespace std;

int main() {
    bool value = true;

    // Display boolean as true/false
    cout << boolalpha << value << endl;

    // Display boolean as 1/0
    cout << noboolalpha << value;

    return 0;
}