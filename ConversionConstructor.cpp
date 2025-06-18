#include<iostream>
using namespace std;

class point{
    private:
    int x;
    int y;
    public:
    point(int i=0, int j=0) : x(i) , y(j) {}
    void print()
    {
        cout<<"x coordinate is "<<x<<" and y coordinate is "<<y<<endl;
    }
};

int main()
{
    point t(20,20);
    t.print();
    t = 30; // Implicit conversion using constructor
    t.print();
    return 0;
}