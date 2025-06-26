// Use of unique_ptr is demonstrated via this program
#include<iostream>
#include<memory>
using namespace std;

class Test{
    public:
    Test()
    {
        cout << "Test Constructor\n";
    }
    ~Test()
    {
        cout << "Test Destructor\n";
    }
    void sayHi()
    {
        cout << "Hi From Test\n";
    }
};

int main()
{
    unique_ptr<Test> ptr1 = make_unique<Test>(); // safer than new
    ptr1->sayHi(); // Access like a normal pointer

    //unique_ptr<Test> ptr2 = ptr1; // Error : cannot be copied
    unique_ptr<Test> ptr2 = move(ptr1); // Transferring ownership
    return 0;
}