#include<iostream>
using namespace std;
int main()
{
 int num;
 int random=rand();
 cout<<"enter a random number";
 cin>>num;
 do{
    cin>>num;
    if(num==random)
    {
     cout<<"crt";
    }
    else if(num>random)
    {
     cout<<"high";
    }
    else
    {
     cout<<"low";
    }
   }while(num!=random);
   return 0;
 }
