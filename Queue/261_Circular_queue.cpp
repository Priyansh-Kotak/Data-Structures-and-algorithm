#include <iostream>
#include <string.h>
using namespace std;
struct queue
{
    int front;
    int rear;
    int *Q;
    int size;
};

void push(struct queue *st, int x)
{
    if ((st->rear + 1) % st->size == st->size - 1)
    {
        cout << "\nStack is full";
    }
    else
    {
        st->rear = (st->rear + 1) % st->size++;
        st->Q[st->rear]=x;
    }
}

int pop(struct queue *st)
{
    int x;
    if (st->front == st->rear)
    {
        cout << "\nQueue is empty";
    }

    else
    {
        
        st->front = (st->front + 1) % st->size;
        x = st->Q[st->front];
        return x;
    }
}

void display(struct queue *st)
{
    int i = st->front + 1;
    cout<<"\n";
    do
    {

        printf("%d ", st->Q[i]);
        i = (i + 1) % st->size;
    } while (i != (st->rear + 1) % st->size);

    printf("\n");
}

int main()
{
    struct queue st;
    st.front = -1;
    st.rear = -1;
    st.size = 13;
    st.Q=new int[st.size]; 
    push(&st, 5);
    push(&st, 3);
    push(&st, 2);
    cout<<"\nDeleted element is : "<<pop(&st);
    display(&st);
}