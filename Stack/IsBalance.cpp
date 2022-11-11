#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct stack
{
    int size;
    int *S;
    int top;
};

void push(struct stack *st, char x)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack is overflow ");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

void pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow ");
    }
    else
        st->S[st->top--];
}

void display(struct stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        printf("\n%d", st->S[st->top]);
    }
}

int isBalance(struct stack *st, char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(st, '(');
        }

        else if (exp[i] == ')')
        {
            if (st->top == -1)
            {
                return 0;
            }
            else
                pop(st);
        }
    }

    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack st;
    st.size = 4;
    st.top = -1;
    free(st.S);
    st.S = new int[st.size];

    char *exp = "(((a+b)+(a-b)))";
    if (isBalance(&st, exp))
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }
}



