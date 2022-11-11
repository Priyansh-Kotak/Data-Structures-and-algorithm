#include <iostream>
using namespace std;

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
    q->rear = q->front = 0;
    q->Q = new Node*();
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
struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;

} *root = NULL;

int isEmpty(struct Queue *q)
{
    if(q->rear == q->front)
    {
        return 1;
    }
    else return 0;
}
void create_tree()
{
    struct Queue q;
    struct Node *p,*t;
    create(&q, 15);
    root = new Node();
    cout << "\nEnter the root value :";
    int x;
    cin >> x;
    root->lchild = NULL;
    root->rchild = NULL;
    root->data = x;
    enqueue(&q, root);
    while(! isEmpty(&q))
    {
        p=dequeue(&q);
        cout<<"\nEntre left Node :-";
        cin>>x;
        if(x != -1)
        {
            t = new Node();
            t->data =x;
            t->lchild =NULL;
            t->rchild = NULL;
            p->lchild=t;
            enqueue(&q,t);

        }

        cout<<"\nEnter the rigth child ";
        cin>>x;
        if(x != -1)
        {
            t=new Node();
            t->lchild =NULL;
            t->rchild =NULL;
            t->data =x;
            p->rchild =NULL;
            enqueue(&q,t);
        }


    }
}


void levelorder(struct Node *p)
{
    struct Queue q;
    create(&q,100);
    cout<<root->data;
    enqueue(&q,root);
    
    while(!isEmpty(&q))
    {
        root=dequeue(&q);
        if(root->lchild)
        {
            cout<<root->lchild->data;
            enqueue(&q,root->lchild);
        }

        if(root->rchild)
        {
            cout<<root->rchild->data;
            enqueue(&q,root->rchild);
        }
    }

}

int main()
{
    struct Node p;
    create_tree();
    levelorder(&p);

}