#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *S;
};

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "\nStack is full ";
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

void pop(struct stack *st)
{
    int x;
    if (st->top == -1)
    {
        cout << "\nStack is empty ";
    }
    else
    {
        st->top--;
        x = st->top;
    }
}

void display(struct stack *st)
{
    cout<<"Displaying the numbers ";
    for (int i = st->top; i > 0; i--)
    {
        cout << st->S[i];
    }
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size = 11;
    st.S = new int[st.size];
    int j=1;
    while (j==1)
    {
        cout << "1.Push\n2.Pop\n4.Exist\n3.display ";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int a;
            cout << "Enter the number :";
            cin >> a;
            push(&st, a);
            break;

        case 2:
            pop(&st);
            break;

        case 3:
            display(&st);
            break;

        case 4:
            cout<<"\n Thanks for using this software";
            j=0;
            break;
        
        }


    }
}
