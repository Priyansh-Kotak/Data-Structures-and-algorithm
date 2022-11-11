#include<iostream>
#include<string.h>
using namespace std;
struct queue 
{
    int front;
    int rear;
    int *Q;
    int size;
};


void push(struct queue *st,int x)
{
    if(st->rear == st->size-1)
    {
        printf("\nQueue is full ");
    }
    else
    st->rear++;
    st->Q[st->rear]=x;
}


int pop(struct queue *st)
{
    int x=-1;
    if(st->front==st->rear)
    {
        cout<<"Queue is full";
    }
    else
    st->front++;
    x=st->Q[st->front];
    return x;
}

void display(struct queue *st)
{
    int i;
    for(i= st->front + 1 ; i<=st->rear ;i++)
    {
        printf("%d",st->Q[i]);
        printf("\n");
    }
}


int main()
{
    struct queue st;
    st.rear= -1;
    st.front=-1;
    st.size=12;
    st.Q=new int[st.size];
    push(&st,3);
    push(&st,4);    
    push(&st,5);    
    push(&st,6);
    pop(&st);
    display(&st);    

}