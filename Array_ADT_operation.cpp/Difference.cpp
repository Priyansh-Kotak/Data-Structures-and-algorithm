#include<iostream>
using namespace std;
class check
{
    int *A,*B,*C;
    int size;
    int m;
    int n;
    public:
    check(int size)
    {
        A=new int[size];
        B=new int[size];
        C=new int[size];
    }

    void create()
    {
        m=4;
        n=4;
        for (int i = 0; i < m; i++)
        {
            cin>>A[i];
        }

        for (int j = 0; j < n; j++)
        {
            cin>>B[j];
        }
        
        
    }

    void inter()
    {
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(A[i]<B[j])
            C[k++]=A[i++];
            else if(B[j]<A[i])
            j++;
            else
            {
            i++;
            j++;
            }
        }
            
        
        for ( ; i < m ; i++)
        {
            C[k++]=A[i];
        }
        
        for (; j < n; j++)
        {
            C[k++]=B[j];
        }
        cout<<"\n";
        cout<<"Array after merging :";
        for (int k = 0; k < (m+n) ; k++)
        {
            cout<<C[k];
        }        

    }
};


int main()
{
    check a(10);
    a.create();
    a.inter();
}
