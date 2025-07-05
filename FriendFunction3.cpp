#include<iostream>
using namespace std;

class geeks{
private:
int pvt_variable;
protected:
int pro_variable;
public:
geeks(){
    pvt_variable = 10;
    pro_variable = 15;
}

// friend class declaration
friend class gfg;
};

class gfg{
    public:
    void display(geeks& g)
    {
        cout << "Pvt: "<<g.pvt_variable<<endl;
        cout << "Pro: "<<g.pro_variable<<endl;
    }
};

int main(){
    geeks g;
    gfg gf;
    gf.display(g);
    return 0;
    
}