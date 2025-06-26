#include <iostream>
using namespace std;

int main() {
    char c1, c2;

    // Input skips whitespace by default
    cin >> c1;  

    // Input the next character without skipping whitespace
    cin >> noskipws >> c2;  

    cout << "c1: " << c1 << ", c2: " << c2;
    return 0;
}