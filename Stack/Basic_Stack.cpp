#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *S;
};

void push(struct stack *st, char x)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack is overflow ");
    }
    else
        st->top++;
    st->S[st->top] = x;
}

char pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("Stack is underflow ");
        return -1;
    }

    else
        return st->S[st->top--];
}

int isOperator(char d)
{
    if (d == '*' || d == '-' || d == '/' || d == '+')
    {
        return 1;
    }
    else
        return 0;
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '-' || ch == '+')
        return 2;
    else
        return 0;
}

char stacktop(struct stack *st)
{
    return st->S[st->top];
}

char *ItoP(struct stack *st, char *infix)
{
    char *postfix = new char[strlen(infix) + 1];
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }

        else if(infix[i]=='(')
        {
            push(st,'(');
        }
        else if (precedence(infix[i]) > precedence(stacktop(st)))
        {
            push(st, infix[i]);
            i++;
        }

        else
        {
            if(infix[i]==')')
            {
                if(!isOperator(st->S[st->top]))
                {
                    postfix[j]=pop(st);
                    j++;
                }
                else if(isOperator)
                {
                    postfix[j]=pop(st);
                    j++;
                }
            }
            else
            {
            pop(st);   
            
            }
        }
    }

    while (!(st->top == -1))
    {
        postfix[j] = pop(st);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size = 4;
    st.S = new char[st.size];
    char *infix = "a+b";
    printf("postfix is %s", ItoP(&st, infix));
}