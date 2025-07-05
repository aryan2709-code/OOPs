#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        throw runtime_error("This is runtime exception");
    }
    
    // Catching by value
    catch (exception& e) { // The main advantage of catching errors or thrown objects by reference is that it allows us to catch polymorphic exception types.
        cout << "Caught: " << e.what();
    }

    return 0;
}

// In the above example, we were able to catch the runtime_error exception using the reference to exception class. This is very helpful in handling 
//exceptions derived from other exceptions , like in standard exception hierarchy