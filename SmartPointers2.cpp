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
    shared_ptr<Test> sp1 = make_shared<Test>();
    shared_ptr<Test> sp2 = sp1; //Both share ownership

    cout << "Use count : "<<sp1.use_count()<<endl;
    // Destructor called automatically after the last shared pointer dies
}