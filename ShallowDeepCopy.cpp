#include<iostream>
#include<vector>
using namespace std;

class Car{
    public:
    string name;
    vector<string> colors;

    Car(string name , vector<string> colors)
    {
        this->name = name;
        this->colors = colors;
    }

};

int main(){
    vector<string> Honda_colors = {"Red" , "Blue" , "Green"};
    Car Honda = Car("Honda" , Honda_colors);

    // Deepcopy of honda
    Car Deepcopy_Honda = Honda;
    Deepcopy_Honda.colors.push_back("Black");
    cout << "DeepCopy: ";
    for(string color : Deepcopy_Honda.colors)
    cout << color << " ";
    cout<<endl;
    cout << "Original: ";
    for(string color : Honda.colors)
    cout << color << " ";
    cout<<endl;

    // Shallow Copy Of Honda 
    Car* Copy_Honda = &Honda;
    Copy_Honda->colors.push_back("Black");
    cout<<"Shallow Copy: ";
    for(string color : Copy_Honda->colors)
    cout << color << " ";
    cout<<endl;
    cout<<"Original: ";
    for(string color : Honda.colors)
    cout << color << " ";
    cout << endl;

    cout << "Aryan" << endl;

    return 0;
}

