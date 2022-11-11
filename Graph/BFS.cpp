#include<iostream>
using namespace std;



struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rare = NULL;


void enqueue(int x)
{
    struct Node *t;
    t= new Node;
    if(t==NULL)
    {
        cout<<"\nQueue is full";
    }

    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
        {
            front =rare = t;
        }
        else
        {
            rare ->next = t;
            rare = t;
        }
    }
}


int dequeue()
{
    int x= -1;
    struct Node *t;
    if(front == NULL)
    {
        cout<<"\nQueue is Empty";
    }

    else
    {
        x=front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front == NULL;
}


void BFS(int A[][7] , int start , int n)
{
    int i = start ;
    int visited[7]={0};
    visited[i]=1;
    cout<<i;
    enqueue(i);
    while(! isEmpty())
    {
        int u = dequeue();
        for(int v=1 ; v<=n ; v++)
        {
            if(A[u][v] == 1 && visited[v] == 0)
            {
                cout<< v;
                visited[v] =1;
                enqueue(v);
            }
        }

    }

}


void DFS(int A[][7],int start , int n)
{
    int u = start;
    static int visited[7] = {0};
    if(visited[u] == 0)
    {
        cout<<u;
        visited[u] = 1;
        for(int v = 0; v <= n; v++)
        {
            if(A[u][v] == 1 && visited[v] ==0)
            {
                DFS(A,v,7);
            }
        }
    }

}



int main()
{
    int A[7][7]= {  {0,0,0,0,0,0,0},
                    {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}             
                };

    // BFS(A,1,7);
    DFS(A,1,7);

    

}