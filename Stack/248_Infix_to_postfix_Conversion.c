#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int top;
    char *S;
    int size;
};

// void create(struct Stack *st)
// {
//     st->top = -1;
//     st->size = 100;
//     
// }

int stackTop(struct Stack *st)
{
    return st->S[st->top];
}

int isEmpty(struct Stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else return 0;
}

int isFull(struct Stack *st)
{
    if (st->top == st->size -1)
    {
        return 1;
    }
    else return 0;
    
}







void push(struct Stack *st, char a)
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

char pop(struct Stack *st)
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

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("\n%c", st.S[i]);
    }
}

int precedence(char ch)
    {
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
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

char * InToPost(char *infix)
{
    struct Stack * st=(struct Stack *)malloc(sizeof(struct Stack));
    st->top=-1;
    st->size=10;
    st->S = (char *)malloc(st->size * sizeof(char));
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 1) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (pre(infix[i]) > pre(stackTop(st)))
            {
                push(st, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(st);
                j++;
            }
        }
    }

    while (!isEmpty(st))
    {
        postfix[j]=pop(st);
        j++;
        postfix[j]='\0';
        return postfix;
    }
    
}

int main()
{
    char * infix = "x-y/z-k*d";
    printf("postfix is %c ",InToPost(infix));
    return 0;
}