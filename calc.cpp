#include<iostream>
using namespace std;
int main()
{
 int operation;
 int a,b,c;
 cout<<"1.Addition"<<" "<<"2.subtraction"<<" "<<"3.multiplication"<<" "<<"4.division";
 cout<<"enter the operation to be performed";
 cin>>operation;
 cout<<"enter two numbers";
 cin>>a>>b;
 switch(operation)
 {
  case 1:
  {
   c=a+b;
   cout<<"the sum is"<<" "<<c;
   break;
  }
  case 2:
  {
   c=a-b;
   cout<<"the difference is"<<" "<<c;
   break;
  }
  case 3:
  {
   c=a*b;
   cout<<"the answer is"<<" "<<c;
   break;
  }
  case 4:
  {
   c=a/b;
   cout<<"the answer is"<<" "<<c;
   break;
  }
  default:
  {
   cout<<"invalid operation";
   break;
  }
  }
  return 0;
 }
