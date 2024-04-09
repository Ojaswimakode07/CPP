#include<iostream>
using namespace std;
int main()
{
	char v;
	cout<<"Enter a Alphabet ";
	cin>>v;
	if (v=='a' || v== 'A' || v=='e'|| v=='E' ||v=='i'|| v=='I' || v=='o' || v=='O'||v=='u'|| v=='U')
	{
	cout<<"The given alphabet is Vowel "<<v;
    }
	else
	{
	cout<<"\nThe given alphabet is Consonent "<<v;
    }
	return 0;
}
