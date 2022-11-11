#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // tYPE of passing the object

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
        
    }
}


void Display(struct Node *p)
{
    if (p!=NULL)
    {
        cout<<" "<<p->data;
        Display(p->next);

    }
    
}


int main()
{
    struct Node *temp;
    int A[]={3,5,6,7,8,9,10};
    int len= sizeof(A)/sizeof(A[0]);
    // cout<<len;

    create(A,len);

    Display(first);
    
    

}