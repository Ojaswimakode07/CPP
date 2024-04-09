#include<iostream>
using namespace std;
int main()
{
	int dividend,divisor,quotient,reminder;
	cout<<"enter the value of dividend and divisor= ";
	cin>>dividend>>divisor;
	quotient=dividend/divisor;
	reminder=dividend%divisor;
	cout<<"Quotient= "<<quotient<<"\n"<<"Reminder= "<<reminder;
	return 0;
}
