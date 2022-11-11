#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;

} *root = NULL;

void insert(int key)
{
    struct Node *p = root;
    struct Node *t;
    struct Node *r;
    if (root == NULL)
    {
        t = new Node();
        t->data = key;
        t->lchild = t->rchild = NULL;
        root = t;
        return;
    }

    while (p != NULL)
    {
        r = p;
        if (key > p->data)
        {
            p = p->rchild;
        }

        else if (key < p->data)
        {
            p = p->lchild;
        }
    
        else
            return;
    }

    t = new Node();
    t->data = key;
    t->lchild = t-> rchild =NULL;
    if (key > r->data)
    {
        r->rchild = t;
    }
    else if (key < r->data)
    {
        r->lchild = t;
    }
}


void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        cout<< p->data;
        Inorder(p->rchild);

    }
}


int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    Inorder(root);
}