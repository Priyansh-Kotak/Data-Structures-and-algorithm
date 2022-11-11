#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,n,*p;
    cout<<"Enter number of elements :";
    cin>>n;
    p=new int[n];                             //  Dynamic memory allocation in C++
    for ( i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout<<p[i];
    }
     delete [] p;                              // Freeing the memory space in C++
       
    for ( i = 0; i < n; i++)
    {
        cout<<p[i];
    }

    p=(int *) malloc(n*sizeof(int));        // Dynamic memory allocation in C 
    for ( i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout<<p[i];
    }

    free(p);                                // Freeing space in C
    
    
}