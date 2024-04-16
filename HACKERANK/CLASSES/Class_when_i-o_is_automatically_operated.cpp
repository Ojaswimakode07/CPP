#include<iostream>
using namespace std;
struct student
{
 //private declaration
   int age,standard;
   char first_name[50],last_name[50];
};
int main()
{
   //main function declaration is done after the class declaration
    student st;
    //when i/o is automatically operated
    cin>>st.age>>st.standard>>st.first_name>>st.last_name;
    cout<<st.age<<" "<<st.standard<<" "<<st.first_name<<" "<<st.last_name;
    return 0;
}
