#include<iostream>
using namespace std;
class student
{
   public: 
    char first_name[50],last_name[50],standard[50];
    int age;
    public:
    	void getdata();
		void display();    
};
 void student :: getdata()
  {
  	cout<<"enter the age of student ";
	cin>>age;
	cout<<endl;
	cout<<"enter the first name ";
	cin>>first_name;
	cout<<endl;
	cout<<"enter the last name ";
	cin>>last_name;
	cout<<endl;
	cout<<"enter the standard ";
	cin>>standard;
	cout<<endl;
  }
  void student ::display()
   {
    	cout<<age<<endl<<first_name<<endl<<last_name<<endl<<standard;	
	}
  	
int main()
{
    student std1;
    std1.getdata();
    std1.display();
    return 0;
}
