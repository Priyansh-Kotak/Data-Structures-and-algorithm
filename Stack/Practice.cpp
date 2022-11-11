// #include<iostream.h>
#include<iostream>
using namespace std;
#include <conio.h>
#define size 20
#include <string.h>
void pfix();
void push(int);
char pop();
char infix[20], prefix[20], revexp[20];
struct stack
{
    int s[size];
    int top;
} st;
int main()
{
    st.top = 0;
    // clrscr();
    cout << "enter the infix expression:";
    cin >> infix;
    strrev(infix);
    strcpy(revexp, infix);
    pfix();
    getch();
}
void pfix()
{
    int i, j = 0;
    for (i = 0; revexp[i] != '\0'; i++)
    {
        switch (revexp[i])
        {
        case '+':
        {
            while (st.s[st.top] >= 1)
                prefix[j++] = pop();
            push(1);
            break;
        }
        case '-':
        {
            while (st.s[st.top] >= 1)
                prefix[j++] = pop();
            push(2);
            break;
        }
        case '*':
        {
            while (st.s[st.top] >= 3)
                prefix[j++] = pop();
            push(3);
            break;
        }
        case '/':
        {
            while (st.s[st.top] >= 3)
                prefix[j++] = pop();
            push(4);
            break;
        }
        case '^':
        {
            while (st.s[st.top] >= 4)
                prefix[j++] = pop();
            push(5);
            break;
        }
        case ')':
        {
            push(0);
            break;
        }
        case '(':
        {
            while (st.s[st.top] != 0)
                prefix[j++] = pop();
            st.top--;
            break;
        }
        default:
            prefix[j++] = revexp[i];
        }
    }
    while (st.top > 0)
        prefix[j++] = pop();
    cout << "the prefix expression is:";
    cout << prefix;
}
void push(int ele)
{
    st.top++;
    st.s[st.top] = ele;
}
char pop()
{
    int el;
    char e;

    el = st.s[st.top];
    st.top--;
    switch (el)
    {
    case 1:
        e = '+';
        break;
    case 2:
        e = '-';
        break;
    case 3:
        e = '*';
        break;
    case 4:
        e = '/';
        break;
    case 5:
        e = '^';
        break;
    }
    return (e);
}
