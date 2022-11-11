#include<iostream>
using namespace std;
class duplicate 
{
    int *A;
    int size,n;
    public:
    duplicate(int size)
    {
        A=new int[size];
    }


    void create()
    {        
        n=8;
        cout<<"\n"<<"Strat entering the elements :";
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        
    }

    void duplic()
    {
        int j;
        for (int i = 0; i < n; i++)
        {
            if (A[i]==A[i+1])
            {
                j=i+1;
                while (A[j]==A[i]) j++;
                {
                    cout<<"\n";
                    cout<<A[i]<<" Appearing "<<j-i<<" times. ";
                    i=j-1;
                }
                
            }
            
        }
        
    }





};


int main()
{
    duplicate a(10);
    a.create();
    a.duplic();

}