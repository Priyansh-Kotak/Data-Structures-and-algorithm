#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

Node* search(Node *p)
{
    int key;
    printf("\nEnter which number do you want to search from the linked list ? ");
    fflush;
    scanf("%d ", &key);

    while (p)
    {
        if (key == p->data)
            return p;

        p = p->next;
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    int A[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);

    create(A, n);

    temp=search(first);
    

    printf("\nThe search is successfull and the word that u have searched = %d", temp->data);

}
