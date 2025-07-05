#include<iostream>
using namespace std;

class parent{
    public:
    int id_p;
    parent(int x = 22) : id_p(x) {}
    void printID_p()
    {
        cout << id_p << endl;
    }
};

class child : public parent{
    public:
    int id_c;
    child(int x = 22) : id_c(x) {}
    void printID_c(){
        cout << id_c << endl;
     }
};

int main()
{
    child c1;
    c1.id_p = 7; 
    c1.printID_p();
    // An object of child class has all the data members and the member functions of the parent class , so above two lines try to access the parent's method 
    //and data from the derived class object.

    // accessing the child class method and data too
    c1.id_c = 19;
    c1.printID_c();
    return 0;
}
