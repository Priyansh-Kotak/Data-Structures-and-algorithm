//STACK IMPLEMENTATION USING LINKED LIST
#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
// #include<alloc.h>
struct node
{
int data;
struct node *next;
};struct node *list,*top,*nw,*temp;
void push(int item)
{
if(list->data==NULL)
{
list->data=item;
list->next=NULL;
}
else
{
nw=(struct node *)malloc(sizeof(node));
nw->data=item;
nw->next=top;
top=nw;
}
}
int st_empty()
{
if(list->data==NULL)
return 1;
else
return 0;
}
int pop()
{
int item=0;
if(st_empty()==1)
cout<<"\n the list is empty";
else
temp=top;
item=top->data;
top->data=NULL;
top=top->next;
free(temp);
return item;
}
void display()
{
if(st_empty()==1)
{
cout<<"\n list empty";
}
else
temp=top;
while(temp!=NULL)
{
cout<<"\t";
cout<<temp->data;
temp=temp->next;
}
cout<<"\t";
cout<<temp->data;
}
int main()
{
int item,choice;
// clrscr();
list=(struct node *)malloc(sizeof(node));
list->data=NULL;
list=top;
do
{
cout<<"\n1.push\n2.pop\n3.display\n4.exit";
cout<<"\nenter your choice";
cin>>choice;
switch(choice)
{
case 1:
{
// clrscr();
cout<<"\n enter the iten u want to insert";
cin>>item;
push(item);
break;
}
case 2:
{
// clrscr();
item=pop();
cout<<"\n the deleted item is";
cout<<item;
break;
}
case 3:
{
// clrscr();
display();
break;
}
}
}while(choice<=3);
getch();
}
