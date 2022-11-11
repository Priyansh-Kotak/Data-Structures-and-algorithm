#include<iostream>
using namespace std;


void insertion_sort(int A[], int n)
{
    
    int k=0;
    while(k<n)
    {    
        int i=0;
        while(i<n-1)
        {
            int j=i+1;
            if(A[i]>A[j])
            {
                swap(A[i],A[j]);
            }
            i++;
            j++;
        }
        k++;
    }
}


int main()
{
    int A[]={8,5,7,3,2};
    insertion_sort(A,5);

    for(int i=0;i<5;i++)
    {
        cout<<A[i];
    }
}

