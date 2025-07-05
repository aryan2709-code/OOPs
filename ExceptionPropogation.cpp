#include<iostream>
using namespace std;
class GFG{
    public:
    GFG()
    {
        cout << "Object created\n";
    }
    ~GFG()
    {
        cout << "Object destroyed\n";
    }
};

int main()
{
    try{
        GFG g;
        throw 10;
        cout << "After Throw\n"; // skipped
    }
    catch(int e)
    {
        cout << "Caught : "<<e<<endl;
    }
    cout << "After catch \n";

    return 0;
}