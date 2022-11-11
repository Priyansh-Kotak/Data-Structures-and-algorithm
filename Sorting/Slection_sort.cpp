#include <iostream>
#include <stdlib.h>

using namespace std;

void Selection(int A[], int n)
{
    int i, j, k;

    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        int temp = A[i];
        A[i]=A[k];
        A[k]=temp;
    }
}

int main()
{
    int A[] = {8, 5, 7, 3, 2};
    Selection(A, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << A[i];
    }
}