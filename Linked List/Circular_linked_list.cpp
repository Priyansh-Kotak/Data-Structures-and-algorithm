#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} * head, *last;

void create(int A[], int n)
{
    struct Node *t;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    do
    {
        cout << p->data;
        p = p->next;
    } while (p != head);
}

void insert_first(struct Node *p)
{
    struct Node *s;
    cout << "\nEnter the element you wna to enter into the first";
    int n;
    cin >> n;
    s = new Node;
    s->data = n;
    s->next = head;
    last->next = s;
    head = s;
}

void insert_last(struct Node *p)
{
    struct Node *r;
    r = new Node;
    cout << "\nEnter element you want to insert at the last :";
    int n;
    cin >> n;
    r->data = n;
    last->next = r;
    r->next = head;
}

void insert_mid(struct Node *p)
{
    struct Node *t;
    t = new Node;
    cout << "\nEnter the position of the element :";
    int pos;
    cin >> pos;
    cout << "\nEnter the value at that poition :";
    int m;
    cin >> m;
    t->data = m;

    for (int i = 0; i < pos-2 ; i++)
    {
        p = p->next;
    }
    // cout<<" "<<p->data<<" ";
    t->next = p->next;
    p->next = t;
}

void delete_first(struct Node *p)
{
    head = p->next;
    last->next = head;
}

void delete_mid(struct Node *p) // You can also delete the last element of the linked list.
{
    cout << "\nEnter the position at which wna to delete the position :";
    int pos;
    cin >> pos;
    // cout<<"\nEnter the element :";
    // int m;cin>>m;

    struct Node *q;
    q = NULL;
    for (int i = 0; i < pos-1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    delete (p);
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    // insert_first(head);
    // insert_last(head);
    // insert_mid(head);
    // delete_first(head);
    delete_mid(head);
    display(head);
}