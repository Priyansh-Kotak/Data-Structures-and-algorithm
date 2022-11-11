#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

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

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }

    return l;
}

int sum(struct Node *p) 
{
    int s = 0;
    while (p != NULL)
    {   
        s += p->data;
        p = p->next;
    }
    return s;
}

int main()
{
    int A[] = {3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(A) / sizeof A[0];

    // cout<<len;

    create(A, len);
    cout << "Total number of nodes :" << count(first);
    cout << "\n";
    cout << "Sum of all the number in the linked list : " << sum(first);
}
