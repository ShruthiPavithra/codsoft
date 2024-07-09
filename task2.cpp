#include<iostream>
using namespace std;
struct task{
 string work;
 task *next;
 };
class List
{
 task *F;
 int count;
 public:
 List()
 {
  F=NULL;
  count=0;
 }
 bool add(string a);
 bool display();
 bool deletion(string b);
};
bool List::add(string a)
{
 task *n;
 n=new task;
 n->next=NULL;
 if(n==NULL)
 {
  return false;
 }
 n->work=a;
 n->next=F;
 F=n;
 count++;
 return true;
}
bool List::display()
{
 task *t;
 t=F;
 if(F==NULL)
 {
  return false;
 }
 while(t!=NULL)
 {
  cout<<t->work;
  t=t->next;
 }
 cout<<"\n\n";
}
bool List::deletion(string a)
{
 int i=0;
 task *t;
 t=F;
 task *p;
 if(F==NULL)
 {
  return false;
 }
 while(t!=NULL)
 {
  p=NULL;
  if(a==t->work)
  {
   if(p!=NULL)
   {
    p->next=t->next;
   }
   else
   { 
    F=t->next;
   }
   delete(t);
   if(p!=NULL)
   {
    t=p->next;
   }
   else
   {
    t=F;
   }
   count--;
   i++;
   continue;
  }
 }
p=t;
t=t->next;
}
int main()
{
 int num;
 string a;
 bool b,c;
 List mylist;
   cout<<"enter the task to be added";
   cin>>a;
   b=mylist.add(a);
   if(b==true)
   {
    cout<<"task added successfully"<<endl;
   }
   else
   {
    cout<<"addition of task gets failed";
   }
   /*mylist.display();
   if(b==true)
   {
    cout<<a<<" "<<"completed";
   }
   else
   {
    cout<<"pending";
   }*/
   cout<<"enter the task to be deleted";
   cin>>a;
   b=mylist.deletion(a);
   if(b==true)
   {
    cout<<"the task is successfully deleted";
   }
   else
   {
    cout<<"task deletion failed";
   }
  return 0;
 }
 
