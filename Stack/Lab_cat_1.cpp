#include<iostream>
#include<string.h>
using namespace std;

struct stack
{
    int top;
    int *S;
    int size;
};

void push(struct stack *st , int x)
{
    if(st ->top == st->size-1)
    {
        cout<<"Stack is full";
    }
    else
    {
        st->top ++;
        st->S[st-> top] = x;
    }
}

void pop(struct stack *st)
{
    if(st->top == -1)
    {
        cout<<"\nStack is empty";
    }
    else
    {
        st->top --;
    }
}

int isbalanced(struct stack *st , char A[])
{
    for(int i =0 ; A[i] != '\0' ; i++)
    {
        if(A[i] == '(')
        {
            push(st ,'(');
        }
        else if(A[i] == ')')
        {
            if(st->top == -1)
            {
                return 0;
            }
            else
            {
                pop(st);
            }
        }

    }

    if(st->top == -1)
    {
        return 1;
    }
    else return 0;
    
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size =11;
    st.S = new int[st.size];
    cout<<"\nEnter your string :";
    char *A = new char[st.size];
    gets(A);

    if(isbalanced(&st , A))
    {
        cout<<"Success ";
    }    
    else 
    {
        cout<<"Not successfull ";
    }
    
}





