// This program depicts the situation when one class grants friend status to the member function of another class.
#include<iostream>
using namespace std;
class base; // forward declaration , this is the class that will actually grant friendship to the member function of another class

class gfg{
public:
void gfg_function(base& obj); // only declaration
};

class base{
private:
int pvt_var;
protected:
int pro_var;
public:
base(){
    pvt_var = 10;
    pro_var = 99;
}
// Friend Function declaration
friend void gfg::gfg_function(base& obj);

// Friend keyword is used in the class which grants friendship , and we have to mention that class whose member function will become a friend thorough scope resolution operator

};

// friend function definition , done outside both classes
void gfg::gfg_function(base& obj)
{
    cout << "Private variable : "<<obj.pvt_var<<endl;
    cout << "Protected Variable: "<<obj.pro_var<<endl;
}

int main()
{
    base b1;
    gfg g1;
    g1.gfg_function(b1);
    return 0;
}