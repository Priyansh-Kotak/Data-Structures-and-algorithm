
#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int top;
    int size;
    char *S;
};

void create(struct Stack *st)
{
    st->size = 100;
    st->top = -1;
    st->S = (char *)malloc(st->size * sizeof(char));
}

void push(struct Stack *st, char *exp)
{
    if (st->top == st->size - 1)
    {
        printf("\n Stack is overflow ");
    }
    else
    {
        st->top++;
        st->S[st->top] = exp;
    }
}

void pop(struct Stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        st->S[st->top--];
    }
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("\n%d", st.S[i]);
    }
}

void isBalanced(/*struct Stack *st, char *exp*/)
{
    struct Stack st;
    char *exp = "((a+b)*(c-d)))";

    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(&st, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (st.top == -1)
            {
                printf("stack is empty ");
            }
            else
            {
                pop(&st);
            }
        }
    }
    if (st.top == 0)
    {
        printf("\nStack is empty ");
    }
    else
    {
        printf("\nStack is not empty");
    }
}
int main()
{
    struct Stack st;
    create(&st);
    // push(&st,5);
    // push(&st,10);
    // pop(&st);
    st.top= -1;
    st.size = 15;

    isBalanced();

    display(st);
}