#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    // int top;
    struct Node *next;

} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("\nStackOverflow");
    }
    else
    {
        t->data=x;
        t->next = top;
        top = t;
    }
}

void display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}


int pop()
{
    struct Node *t;
    int x=-1;
    if (top==NULL)
    {
        printf("stack is underflow\n");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }

    return x;
    
    
}

int main()
{
    struct Node *p;
    push(10);
    push(10);
    pop();
    display();
}