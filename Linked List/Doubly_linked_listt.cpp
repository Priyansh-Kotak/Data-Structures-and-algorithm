#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
}*first=NULL,*last;

void create(int A[],int n)
{
    struct Node *t;
    first=new Node;
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;


    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->prev=last;
        t->next=NULL;
        last->next = t;
        last=t;

    }
}


void insert_first(struct Node *p)
{
    struct Node *r;
    r=new Node;
    cout<<"\nEnter whuich number do you want to insert into the first position :";
    int n; cin>>n;
    r->data=n;
    r->prev=NULL;
    first->prev = r; 
    r->next=p;
    first=r;
}


void insert_mid(struct Node *p)
{
    struct Node *s;
    s=new Node;
    cout<<"\nEnter the number to be inserted : ";
    int n; cin>>n;
    cout<<"\nEnter at which position you want to insert : ";
    int pos; cin>>pos;

    s->data = n;
    for(int i=0 ; i<pos - 2 ; i++)
    {
        p=p->next;
    }
    s->next=p->next;
    s->prev=p;
    if(p->next)
    {
        p->next->prev=s;
    }
    p->next=s;
}
void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}


int main()
{
    int A[] = {1,2,3,4,5};
    create(A,5);
    // insert_first(first);
    insert_mid(first);
    display(first);
}