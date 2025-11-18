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

/* * Summary of Enums:
 * 1. An enum (enumeration) is a custom data type that groups related integer constants under readable names.
 * 2. Instead of using raw numbers (like 0, 1, 2), you use meaningful labels (like Sunday, Monday), making the code easier to understand.
 * 3. Internally, C++ assigns integers to these names automatically, starting at 0 for the first item and increasing by 1 for each subsequent item.
 */