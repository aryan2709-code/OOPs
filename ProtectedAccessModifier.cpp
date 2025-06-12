// The difference between private and protected access specifier is depicted through this program
// the key difference is that protected members can be accessed in their derived classes as well

#include<iostream>
using namespace std;

// base class 
class parent{
    protected:
    int id_protected;
};

//derived class , derived publically
class child : public parent{
    public:
    void setId(int id)
    {
        id_protected = id; // child class is able to access the protected variable of the base class 
    }
    int get_id()
    {
        return id_protected;
    }
};

int main(){
    child obj1;
    obj1.setId(5);
    cout << obj1.get_id();
    return 0; 
}