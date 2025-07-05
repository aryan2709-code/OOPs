#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortStudents()
{
    struct Student{
        string name;
        int marks;

        Student(string n , int m):name(n),marks(m) {}
    };

    vector<Student> students = {
        {"Aryan" , 85},
        {"Shreya" , 92},
        {"Rohan" , 76},
        {"Priya" , 92}
    };

    // Local class to compare students by name , then by marks
    class Compare{
        public:
        bool operator()(const Student& a , const Student& b)
        {
            if(a.marks == b.marks)
            return a.name < b.name;

            return a.marks > b.marks; // Descending order
        }
    };

    sort(students.begin(),students.end(),Compare());
    cout << "Sorted Students \n";
    for(auto& s: students)
    {
        cout << s.name << " - "<<s.marks<<endl;
    }
}

int main()
{
    sortStudents();
    return 0;
}

