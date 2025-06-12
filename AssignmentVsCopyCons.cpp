#include<iostream>
using namespace std;

class Test{
public:
Test(){

}
Test(Test& t)
{
    cout << "Copy Constructor Called"<<endl;
}
void operator=(const Test&T)
{
    cout << "Assignment Operator Called"<<endl;
}
};

int main(){
    Test t1,t2;
    t2 = t1; // Assignment Operator called because both exist already

    Test t3 = t1; // Copy constructor called because a new object named t3 is being created
    return 0;
}