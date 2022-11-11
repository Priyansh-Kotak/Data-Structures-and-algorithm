#include<iostream>
using namespace std;
struct Stack
{
    int top;
    int *S;
    int size;
};

int push(struct Stack *st, int x)
{
    if(st->top == st->size-1)
    {
        cout<<"Stack is overflow";
    }

    else
    {
        st->top++;
        st->S[st->top];
    }
}


void pop(struct Stack *st)
{
    if(st->top == -1)
    {
        cout<<"Staack is underflow ";
    }

    else
    {
        int x = st->S[st->top];
        st->top--;
    }
}




