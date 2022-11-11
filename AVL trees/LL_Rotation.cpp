#include <iostream>
using namespace std;

struct Node
{
    int data;
    int height;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

int NodeHeigth(struct Node *p)
{
    int x = 0, y = 0;
    if (!p)
    {
        return 0;
    }

    x = NodeHeigth(p->lchild);
    y = NodeHeigth(p->rchild);

    return (x > y ? x + 1 : y + 1);
}

int BalanceFactor(struct Node *p)
{
    int x = 0, y = 0;
    if (!p)
    {
        return 0;
    }

    x = BalanceFactor(p->lchild);
    y = BalanceFactor(p->rchild);

    return x - y;
}

struct Node *LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = p->rchild;
    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeigth(p);
    pl->height = NodeHeigth(p);

    if (root == p)
    {
        root = pl;
    }

    return pl;
}

struct Node *RInsert(struct Node *p, int key)
{
    struct Node *t;
    if (p == NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if (key < p->data)
    {
        p->lchild = RInsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = RInsert(p->rchild, key);
    }

    p->height = NodeHeigth(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
    {
        return LLRotation(p);
    }

    // else if (BalanceFactor(p) == 2 && BalanceFactor(p) == -1)
    // {
    //     return LRRotation(p);
    // }
    // else if (BalanceFactor(p) == -2 && BalanceFactor(p) == -1)
    // {
    //     return RRRotaion(p);
    // }

    // else if (BalanceFactor(p) == -2 && BalanceFactor(p) == -1)
    // {
    //     return RLRotation(p);
    // }

    return p;
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
    root = RInsert(root, 50);
    RInsert(root,10);
    RInsert(root,20);
    RInsert(root,60);
    Inorder(root);
}