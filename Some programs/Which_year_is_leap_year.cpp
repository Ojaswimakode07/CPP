#include <iostream>
using namespace std;
 int main()
{
	int year;
	cout<<"Enter the year= ";
	cin>>year;
    if (year % 400 == 0) 
    {
     	cout << "it is a Leap Year";
	 }
    else if (year % 4 == 0) 
     {
     	cout << "it is a Leap Year";
	 }
    
    // all other years are not leap years
    else 
	{
       cout << "Not a Leap Year";
    }
    return 0;
}
 

