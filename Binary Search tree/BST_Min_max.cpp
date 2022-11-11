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




int min_max(struct Node *p)
{

    int A[10];
    int i=0;
    if(p)
    {
        min_max(p->lchild);
        A[i]= p->data;
        i++;
        min_max(p->rchild);
        
    }

    int length =sizeof(A)/sizeof(A[0]);

    return A[length];
    
    // cout<<"\nMinimum value in the BST is " <<A[0];

    // cout<<"\nMaximum value in the BST is "<<A[length];

}


struct Node * Search(int key)
{
    struct Node *t = root;

    while(t != NULL)
    {
        if( key == t->data)
        {
            return t;
        }

        else if(key > t->data)
            t=t->rchild;

        else if(key < t->data)
            t=t->lchild;

    }

    return NULL;
}

int main()
{
    Insert(3);
    Insert(2);
    Insert(1);

    // Inorder(root);

    int max = min_max(root);
    cout<< max;



    return 0;
}