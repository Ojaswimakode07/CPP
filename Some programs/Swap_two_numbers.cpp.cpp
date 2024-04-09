//swap two numbers
#include<iostream>
using namespace std;
int main()
{
		//before swap
	int a,b,temp;
	cout<<"Enter two Numbers ";
	cin>>a>>b;
		
		//after swap
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping"<<" "<<a<<" "<<b<<"\n";	
	
	return 0;
}
