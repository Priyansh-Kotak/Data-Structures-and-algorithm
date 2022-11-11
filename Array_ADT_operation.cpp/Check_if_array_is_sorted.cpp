#include<iostream>
using namespace std;
class check
{
    int *A;
    int size,length;
    public:
    check(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length = 4;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        
    }

    void sort()
    {
        for (int i = 0; i < length-1; i++)
        {
            for (int j = i+1; j < length; j++)
            {
                if (A[i]>A[j])
                {
                    int temp= A[j];
                    A[j]=A[i];
                    A[i]=temp;
                }
                
            }
            
        }
        
        cout<<"\n"<<"Array after sorting :";
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];
        }
        
        
    }

    void che()
    {
        int flag=0;
        cout<<"\n";
        for (int i = 0; i < length-1; i++)
        {
            if (A[i]>A[i+1])
            {
                flag=1;
            }      
            // cout<<"\n"<<A[i];      
        }
        if (flag==1)
        {
            cout<<"\n"<<"Array is not sorted";
        }
        else
        {
            cout<<"\n"<<"Array is sorted";
        }
        
        
    }
};


int main()
{
    check a(10);
    a.create();
    a.sort();
    a.che();
}