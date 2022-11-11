#include <iostream>
#include <stdio.h>
using namespace std;

struct stack
{
    int size;
    int top;
    int *S;
};

int isEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow ");
        return 0;
    }
    else
        printf("\nStack is not empty");
    return 1;
}

int isFull(struct stack *st)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack is overfolw ");
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *st, int x)
{

    if (st->top == st->size - 1)
    {
        printf("\nStack is overflow");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow ");
    }
    else
    {
        int x = st->S[st->top--];
        return x;
    }
}

void stackTop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        printf("\nStackTop = %d", st->S[st->top]);
    }
}

void peek(struct stack *st)
{
    int pos;
    printf("\nEnter at which index you want a num :");
    scanf("%d", &pos);
    if ((st->top - pos + 1) > 0)
    {
        printf("\nInvalid pos");
    }
    else
    {
        printf("Num at pos %d is %d", pos, st->S[st->top - pos + 1]);
    }
}

void display(struct stack *st)
{
    int i;
    for (i = st->top; i >= 0; i--)
    {
        printf("\n%d", st->S[i]);
    }
}

int main()
{
    struct stack st;
    int a;
    st.top = -1;
    printf("\nEnter size of the stack :");
    free(st.S);
    scanf("%d", &st.size);
    st.S = new int[st.size];
    printf("\nMenu ");
    printf("\n1.Push\n2.Pop\n3.display\n4.stacktop\n5.Peek\n6.isEmpty\n7.isFull");
    printf("Size %d", st.size);
    while (true)
    {
        int c;
        printf("\nEnter your choice :");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            for (int i = 0; i < st.size; i++)
            {
                printf("\nEnter your number ");
                scanf("%d", &a);
                push(&st, a);
            }
            break;

        case 2:
            printf("\nPoped num id %d", pop(&st));
            break;

        case 3:
            display(&st);
            break;

        case 6:
            isEmpty(&st);
            break;

        case 4:
            stackTop(&st);
            break;

        case 5:
            peek(&st);
        }
    }

    // push(&st,3);
    // display(&st);
}
