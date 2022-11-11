#include <iostream>
#include <string.h>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int top;
    char *S;
    int size;
};

void push(struct Stack *st, int a)
{
    int x = 0;
    if (st->top == st->size - 1)
    {
        printf("\nStack is overflow");
    }
    else
    {
        st->top++;
        st->S[st->top] = a;
    }
}

int pop(struct Stack *st)
{
    if (st->top = -1)
    {
        printf("\nStack is underflow ");
    }
    else
    {
        char a = st->S[st->top];
        st->top--;
        return a;
    }
}

int isOperator(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 1;
    }
    else
        return 0;
}

int Eval(struct Stack *st,char *postfix)
{
    int i = 0;
    int x1, x2, r = 0;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (!isOperator(postfix[i]))
        {
            push(st,postfix[i] - '0');
        }
        else
        {
            x2 = pop(st);
            x1 = pop(st);
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                break;
            case '-':
                r = x1 - x2;
                break;
            case '*':
                r = x1 * x2;
                break;
            case '/':
                r = x1 / x2;
                break;
            }
            push(st,r);
        }
    }
    return pop(st);
}
int main()
{
    struct Stack st;
    char *postfix = "35*62/+4-";
    printf("%d", Eval(&st,postfix));
    return 0;
}