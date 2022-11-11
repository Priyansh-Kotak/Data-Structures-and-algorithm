#include<iostream>
using namespace std;
class best
{
    int length1, length2,size;
    int *A,*H;
    public:
    best(int size)
    {
        A= new int[size];
        H= new int[length2];
    }
    void create()
    {
        length1=5;
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }
        int max=A[0];
        for (int i = 1; i < length1; i++)
        {
            if (A[i]>max)
            {
                max=A[i];
            }
            
        }
        length2=max;
        cout<<"\n"<<"Max number in the array  A = "<<length2;
        cout<<"\n";
        for (int j = 0; j < length2; j++)
        {
            H[j]=0;
            // cout<<H[j];
        }

               
    }

    void duplicate()
    {
        for (int i = 0; i < length1; i++)
        {
            cout<<"\n";
            H[A[i]]++; 
            cout<<A[i]<<" "<<H[A[i]];           
        }      
        for (int j = 0; j < length2; j++)
        {
            if (H[j]>1)
            {
                cout<<"\n";
                cout<<"Duplicate element is "<<j<<" and repeated "<<H[j]<<" times ";
            }
                       
        }        
    }

};

int main()
{
    best a(10);
    a.create();
    a.duplicate();   
}