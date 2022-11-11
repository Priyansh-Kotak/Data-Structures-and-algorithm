#include <iostream>
using namespace std;

int findMax(int A[], int n)
{
    // int i = 1;
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    // i++;

    return max;
}

void count_sort(int A[], int n)
{
    int max = findMax(A, n);
    int *c = new int[max + 1];

    for (int i = 0; i < max + 1; i++)
    {
        c[i] = 0;
    }

    

    for (int i = 0; i < n; i++)
    {
        c[A[i]]++;
        A[i] = 0;
    }

    for(int i=0;i< max+1 ;i++)
    {
        if(c[i]>0)
        {
            while(c[i])
            {
                A[i]=i;
                c[i]--;
            }
        }
    }
}

int main()
{
    int A[] = {5, 4, 3, 2, 1};
    count_sort(A, 5);
    for(int i=1;i<=5;i++)
    {
        cout<<A[i];
    }
}