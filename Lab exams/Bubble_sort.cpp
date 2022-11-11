#include<iostream>
using namespace std;
int main()
{
    int A[]={5,4,3,2,1};
    
    int n = sizeof(A)/ sizeof(A[0]);
    // Bubble sort 
    for(int i=0 ; i< n-1 ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }


    for(int i =0; i<n ;i++)
    {
        cout<<A[i];
    }

}