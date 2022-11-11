#include <iostream>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
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
    q->Q = (struct Node **)malloc(q->size * sizeof(struct
                                                   Node *));
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

void Treecreate()
{
    struct Node *p, *t;
    struct Queue q;
    create(&q, 100);

    int x;
    cout << "\nEnter the root value : -";
    cin >> x;
    // int y;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "\nEnter the left node :-";
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        cout << "\nEnter the right node :-";
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void preorder(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(struct Node *p)
{
    if (p != NULL)
    {
        inorder(p->lchild);
        cout << p->data;
        inorder(p->rchild);
    }
}

void postorder(struct Node *p)
{
    if (p != NULL)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data;
    }
}

void levelorder(struct Node *p)
{
    struct Queue q;
    create(&q, 100);
    enqueue(&q, p);
    cout << p->data;
    while (!isEmpty(q))
    {
        p = dequeue(&q);

        if (p->lchild)
        {
            cout << p->lchild->data;
            enqueue(&q, p->lchild);
        }

        if (p->rchild)
        {
            cout << p->rchild->data;
            enqueue(&q, p->rchild);
        }
    }
}

void count_node(struct Node *p)
{
    int count = 1;
    struct Queue q;
    create(&q, 100);
    enqueue(&q, p);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        if (p->lchild)
        {
            count++;
            enqueue(&q, p->lchild);
        }
        if (p->rchild)
        {
            count++;
            enqueue(&q, p->rchild);
        }
    }

    cout << "\ntotal number of nodes are :- " << count;
}

void nodes_2_child(struct Node *p)
{
    struct Queue q;
    create(&q, 100);
    int count = 0;
    enqueue(&q, p);
    while (!isEmpty(q))
    {
        p = dequeue(&q);
        if (p->lchild && p->rchild)
        {
            count++;
            enqueue(&q, p->lchild);
            enqueue(&q, p->rchild);
        }
    }

    cout << "\nTotal number of 2 degree nodes are :- " << count;
}

void sum(struct Node *p)
{
    int sum = 0;
    struct Queue q;
    create(&q, 100);
    sum = sum +p->data;
    enqueue(&q, p);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        if (p->lchild)
        {
            sum = sum + p->lchild->data;
            enqueue(&q, p->lchild);
        }

        if (p->rchild)
        {
            sum = sum +p->rchild->data;
            enqueue(&q, p->rchild);
        }
    }

    cout<<"\nTotal sum of all the nodes are :- "<<sum;
}


//void height

int main()
{
    Treecreate();

    /*
         preorder(root);
        inorder(root);
        postorder(root);
    */

    levelorder(root);
    //  count_node(root);

   // nodes_2_child(root);

   sum(root);
}