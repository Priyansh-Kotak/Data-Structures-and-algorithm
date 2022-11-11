#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int B[5]={2,3,4};
    int C[]={1,2,3,4,5,6};
    int D[11]={2,3,4};

    for (int i = 0; i < 5; i++)
    {
        cout<< &A[i]<<"\n";
    }
    

    return 0;

}