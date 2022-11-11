#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
}*first=NULL,*last;

void create(int A[],int x)
{
    first =new node();
    first->data= A[0];
    first->next =NULL;
    last= first ;

    struct node *u;
    for(int i = 1; A[i] != '\0' ; i++)
    {
        u=new node();
        u->data=A[i];
        u->next = NULL;
        last->next =u;
        last = u;
    }

}

void remove_duplicate(struct node *p)
{
    struct node *q;
    while(p != NULL)
    {
        if(p->data != q->data)
        {
            q=p;
            q=q->next;
        }
        else
        {
            p->next = q->next;
            delete(q);
            q=p->next;
        }
    }
}

void display(struct node *p)
{
    while(p != NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}

int main()
{
    int A[]= { 1,2,3,4,5,6};
    create(A,6);
    remove_duplicate(first);
}