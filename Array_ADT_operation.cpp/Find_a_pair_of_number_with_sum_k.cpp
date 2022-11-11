#include<iostream>
using namespace std;
class sum
{
    int summ;
    int *A,*H;
    int length1,length2;
    public:
    sum(int size)
    {
        A= new int[size];
        H= new int[length2];        
    }

    void create()
    {
        length1=9;
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }
        int max= A[0];
        for (int j = 0; j < length1; j++)
        {
            if (max<A[j])
            {
                max= A[j];   
            }
            
        }
        length2 = max;
        cout<<"Max number :- "<<length2;

        cout<<"\n"<<"Enter sum you want to find ";
        cin>>summ;

        for (int k = 0; k < length2; k++)
        {
            H[k]=0;
            // cout<<H[k];
        }

             
    }

    void summm()
    {
        for (int  i = 0; i < length1; i++)
        {
            if (H[summ-A[i]]!=0)
            {
                cout<<A[i];
                summ-A[i];
                summ;
            }
            H[A[i]]++;  
            
        }
        
    }
};


int main()
{
    sum a(20);
    a.create();
    a.summm();
}