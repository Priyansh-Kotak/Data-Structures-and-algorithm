#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    // struct Node *last;
    // int last;
} *first = NULL, *last;

void create(int A[], int n)
{
    first = new Node;
    struct Node *t;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data;
        p = p->next;
    }
}

void length(struct Node *p)
{
    int l = 0;
    while (p)
    {
        // cout<<p->data;
        l++;
        p = p->next;
    }
    cout << "\nLength of the linked list = " << l;
}

void minimum(struct Node *p)
{
    int min = p->data;
    p = p->next;
    while (p)
    {
        if (min > p->data)
        {
            min = p->data;
            // p=p
        }
        p = p->next;
    }

    cout << "\nMinimum number = " << min;
}

void maximum(struct Node *p)
{
    int max = p->data;
    p = p->next;
    while (p)
    {
        if (max < p->data)
        {
            max = p->data;
        }
        p = p->next;
    }

    cout << "\nMaximum number = " << max;
}

void search(struct Node *p)
{
    int n;
    int l = 0;
    cout << "\nEnter the number you want to search :";
    cin >> n;
    while (p)
    {
        l++;
        if (n == p->data)
        {
            cout << "Yeahh number " << n << " is found at node " << l;
        }
        p = p->next;
    }
}

void insert_first(struct Node *p)
{
    struct Node *q;
    int n;
    cout << "\nEnter number you want to insert at the first position :";
    cin >> n;
    q = new Node;
    q->data = n;
    q->next = first;
    first = q;
}

void insert_last(struct Node *p)
{
    struct Node *r;
    r = new Node;
    int n;
    cout << "\nWhich element do he wants to insert at last :";
    cin >> n;
    r->data = n;
    r->next = NULL;
    last->next = r;
    last = r;
}

void insert_mid(struct Node *p)
{
    struct Node *u;
    u = new Node;

    cout << "\nEnter at which position you want to insert the number :";
    int n;
    cin >> n;
    cout << "\nEnter the elemnt you want to store into that position :";
    int m;
    cin >> m;
    u->data = m;

    for (int i = 0; i < n-2  ; i++)
    {
        p = p->next;
        // p->next;
    }
    cout<<p->data;
    u->next = p->next;
    p->next = u;
    
}

void delete_first(struct Node *p)
{
    first = p->next;
}

void delete_last(struct Node *p, int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        cout << p->data;
        p = p->next;
    }
    cout<<"  "<<p->data;
    p->next = NULL;
    delete (p->next);
}

void delete_mid(struct Node *p, int n)
{
    struct Node *q;
    cout << "Enter at which position you want to delete the num ";
    int m; cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    delete (p);
}   

int main()  
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    create(A, n);
    // insert_first(first);
    //     length(first);
    //     minimum(first);
    //     maximum(first);
    // search(first);
    // insert_last(first);
    insert_mid(first);
    // delete_first(first);
    // delete_last(first, 6);
    // delete_mid(first,6);
    display(first);
}
