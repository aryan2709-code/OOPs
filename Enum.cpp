#include<iostream>
using namespace std;

enum Day { SUNDAY , MONDAY , TUESDAY , WEDNESDAY , THURSDAY , FRIDAY , SATURDAY };

int main()
{
  Day today = MONDAY;

  if(today == MONDAY)
  {
    cout << "Today is monday.\n";
  }

  cout << "Value of MONDAY is: "<<MONDAY<<endl; // output : 1
  return 0;
}