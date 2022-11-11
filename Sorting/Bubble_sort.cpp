#include<iostream>
// #include<algorithm>
using namespace std;







void bubble_sort(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }

}






int main()
{
    int A[] = {8,5,7,3,2};
    bubble_sort(A,5);

    for(int i=0;i<5;i++)
    {
        cout<<A[i];
    }

}