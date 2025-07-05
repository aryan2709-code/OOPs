#include<iostream>
using namespace std;

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

    //declaration for a global friend function
    friend void friendFunction(base& obj);

};

void friendFunction(base& obj)
{
    cout << "Protected Variable : " << obj.pro_var<<endl;
    cout << "Private variable : "<<obj.pvt_var;
}

int main(){
    base b1;
    friendFunction(b1);
    return 0;
}