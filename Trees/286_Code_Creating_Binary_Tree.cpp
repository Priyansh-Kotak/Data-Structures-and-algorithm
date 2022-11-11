#include <iostream>
#include <stdlib.h>
using namespace std;

// Queue implimentation

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}
void enqueue(struct Queue *q, struct Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
        printf("Queue is Full");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

// Tree implimentation

void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    cout << "Enter root value";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "\nEnter the left child :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->lchild = NULL;
            t->rchild = NULL;
            t->data = x;
            p->lchild = t;
            enqueue(&q, t);
        }

        cout << "\nEnter the right child :- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void Preorder(struct Node *p)
{
    if (p)
    {
        cout << p->data;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

int main()
{
    Treecreate();
    Preorder(root);
}