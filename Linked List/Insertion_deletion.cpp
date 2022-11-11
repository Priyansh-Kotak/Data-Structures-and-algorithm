// Inserting in a Sorted Linked List
#include <stdio.h>
#include<iostream>
using namespace std;
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    // first = (struct Node *)malloc(sizeof(struct Node));
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        // t = (struct Node *)malloc(sizeof(struct Node));
        t=new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    // t = (struct Node *)malloc(sizeof(struct Node));
    t=new Node();
    t->data = x;
    t->next = NULL;

    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > 6 )
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}
// int main()
// {

//     int A[] = {10, 20, 30, 40, 50};
//     create(A, 5);

//     SortedInsert(first, 15);

//     Delete(first,2);
//     Display(first);

//     return 0;
// }


int main()
{
    struct node *temp;
    cout<<"\nEnter how many element ";
        cin>>len;
    int A[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(A) / sizeof(A[0]);
    int ch;
    cout<<"Menu of operations : - \n1.Create\n2.dispaly";
    do
    {
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch (ch)
        case 1:
            


    }

    create(A, len);
    Insert(first,0,5);
    display(first);
}