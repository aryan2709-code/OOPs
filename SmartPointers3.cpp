#include<iostream>
#include<memory>
using namespace std;

class Test{
public:
Test()
{
    cout << "Test Constructor.\n";
}
~Test()
{
    cout << "Test Destructor.\n";
}
};

int main()
{
    shared_ptr<Test> ptr1 = make_shared<Test>();
    weak_ptr<Test> wp = ptr1; // Doesn't increase use_count
    cout << "Use count : "<<ptr1.use_count()<<endl;
    auto spt = wp.lock();
    if(spt)
    {
        cout << "Object is still alive.\n";
    }
}