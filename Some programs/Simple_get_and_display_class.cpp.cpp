#include<iostream>
using namespace std;
class students
	{
		private:
			char name[30];
			int roll_number;
		public:
			void getdata(void);
			void display();
	};
  void students :: getdata(void)
  {
  	cout<<"Enter the name of student= ";
  	cin>>name;
  	cout<<endl;
  	cout<<"Enter the Roll_number= ";
  	cin>>roll_number;
  	cout<<endl;
  }
  void students :: display(void)
  	
  		{
			 cout<<"Name= "<<name<<"\n"<<"Roll number= "<<roll_number<<endl;
			}	
  	
  
 int main()
 {
 	students std;
 	std1.getdata();
 	std1.display();
 	return 0;
 	
 }
