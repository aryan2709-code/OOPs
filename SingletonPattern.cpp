#include<iostream>
using namespace std;
class singleton{
private:
static singleton* instance;
singleton(){}
~singleton(){}
// Both constructors and destructors are made private , what it does:
// constructor being private ensures that there is only one way to create an instance of the class and that is through the class methods
//destructor being private ensures the controlled deletion of the object
public:
static singleton* getInstance(){
    if(!instance)
    {
        instance = new singleton();
    }
    return instance;
}

};
singleton* singleton::instance = nullptr; // static member must be defined outside 
int main(){
    singleton* s1 = singleton::getInstance();
    singleton* s2 = singleton::getInstance();
    if(s1 == s2)
    {
        cout << "They point to the same singleton instance.";
    }
    else{
        cout << "****";
    }


    return 0;
}
