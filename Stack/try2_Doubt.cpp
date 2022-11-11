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
    {
        st->top++;
        st->S[st->top] = x;
    }
}

char pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack is underflow ");
        return -1;
    }
    else
    {
        return st->S[st->top--];
    }
}

char stacktop(struct stack *st)
{
    return st->S[st->top];
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')')
        return 1;
    else
        return 0;
}

int precedence(struct stack *st, char ch)
{

    for (int i = st->top; i >= -1; i--)
    {
        if (st->S[i] == ch)
        {
            if (ch == '+' || ch == '-')
                return 2;

            else if (ch == '*' || ch == '/')
                return 4;

            else if (ch == '(')
                return 0;

            else if (ch == ')')
                return 8;
        }

        else
        {
            if (ch == '+' || ch == '-')
                return 1;

            else if (ch == '*' || ch == '/')
                return 3;

            else if (ch == '(')
                return 7;

            else if (ch == '$')
                return 6;

            else if (ch == ')')
                return 0;
        }

        return -1;
    }
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

        else if (precedence(st, infix[i]) > precedence(st, stacktop(st)))
        {
            push(st, infix[i]);
            i++;
        }

        else if (st->S[st->top] == '+' || st->S[st->top] == '-' || st->S[st->top] == '/' || st->S[st->top] == '*')
        {
            postfix[j] = pop(st);
            j++;
        }

        else
        {
            pop(st);
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

void infixToPrefix(struct stack *st, char *infix)
{
    int i;
    char *reverse = new char[strlen(infix)];
    for (i=0; infix[i] != '\0'; i++)
    {
        reverse[i] = infix[i];
        // cout<<reverse[i];
    }

    for(int i = 0; reverse[i] != '\0' ; i++)
    {
        if(reverse[i]=='(')
        {
            reverse[i] = ')';
        }
        else if(reverse[i] ==')')
        {
            reverse[i] ='(';
        }
    }

    printf("\n%s",strrev(reverse));
    char *reverse1 = ItoP(st, reverse);
    printf("\nprefix = %s", strrev(reverse1));


    // char *prefix=ItoP( st , reverse);
    // return strrev(reverse);
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size = 15;
    st.S = new char[st.size];

    char *infix = "((a/b)+c)-(d+(e*f))";
    // char *infix = "D/C+B*A";

    // printf("postfix is %s", ItoP(&st, infix));
    // printf("postfix is %s", infixToPrefix(&st, infix));
    infixToPrefix(&st, infix);
}
