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
        t = (struct Node *)malloc(sizeof(struct Node *));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Rcount(struct Node* p)
{
    if (p!=NULL)
    {
        return Rcount                                                                                
    }
    
}
