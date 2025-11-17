// #include<iostream>
// using namespace std;

// int f()
// {
//     return g() + 10;
// }

// int g()
// {
//     return 3;
// }

// int main()
// {
//     cout << f() << endl;
//     return 0;
// }

// The above program does lead to the following error:
// forwardReferences.cpp: In function 'int f()':
// forwardReferences.cpp:6:12: error: 'g' was not declared in this scope
//     6 |     return g() + 10;
//       |            ^

#include<iostream>
using namespace std;

class ForwardReference{
int i;
public:
int f()
{
    return g() + 10;
}
int g()
{
    return i;
}
};

int main()
{
    ForwardReference fr;
    fr.f();
}

// The above program compiles successfully because all member functions of a class
// are considered declared as soon as their prototypes appear inside the class.
// During class parsing, the compiler knows that 'g()' is a member of the class
// even if its definition appears later. Therefore, 'f()' can call 'g()' without
// a forward declaration, unlike free functions.


