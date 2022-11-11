#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

void Insert(int key)
{
    struct Node *p = root;
    struct Node *t;
    struct Node *r;

    if (root == NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        root=t;
        return;

    }

    while (p != NULL)
    {
        r = p;
        if (key < p->data)
        {
            p = p->lchild;
        }

        else if (key > t->data)
        {
            p = p->rchild;
        }
        else
            return;
    }

    t = new Node;
    t->data = key;
    t->lchild = t->rchild = NULL;
    if (key < r->data)
        r->lchild = t;
    else
        r->rchild = t;
}


void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        cout<<p->data;
        Inorder(p->rchild);
    }
}


int main()
{
    Insert(3);
    Insert(2);
    Insert(1);

    Inorder(root);
}