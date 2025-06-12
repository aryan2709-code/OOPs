#include<iostream>
using namespace std;
class A{
    public:
    int val;

    // parameterised constructor
    A(int x)
    {
        val = x;
    }
    // copy cons.
    A(A& a)
    {
        val = a.val;
    }
};

int main()
{
    A obj(10);
    A obj1(obj);

    cout << obj.val << endl;
    cout << obj1.val << endl;
    cout << obj.val << endl;

    return 0;
}