#include<iostream>
using namespace std;

int max_among_four(int a,int b,int c,int d)
{
      if(a>b && a>c && a>d)
  {
      cout<<a<<endl;
  }
   else if(b>a && b>c &&b>d)
  {
  cout<<b<<endl;
  }
    else if(c>a && c>b && c>d)
  {
  cout<<c<<endl;
  }
   else
  {
  cout<<d<<endl;
  }
  return 0;
    }
    int main()
 {
     int a,b,c,d,max;
     cout<<"Enter the value for a b c and d ";
     cin>>a>>b>>c>>d;
     max=max_among_four( a, b,c, d);
     
 }    
    
  
