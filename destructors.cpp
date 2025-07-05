#include<iostream>
using namespace std;
class MyClass{
    private:
int* data; // pointer to the dynamically allocated memory
public:
MyClass(int value){
    data = new int;
    *data = value;
    cout << *data << endl;
}

// User-defined destructor to free up the memory
~MyClass(){
    delete data;
    cout << "Destructor called and memory deallocated";
}


};

int main(){
    MyClass obj1(10);
    return 0;
}