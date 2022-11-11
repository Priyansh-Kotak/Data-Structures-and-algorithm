#include<iostream>
using namespace std;
class Min
{
    int *A;
    int length,size;
    public:
    Min(int size)
    {
        A=new int[size];
    }
    
    void create()
    {
        length=5;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }        
    }

    void min()
    {
        int min=A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i]<min)
            {
                min=A[i];
            }
            
        }
        cout<<"Min num ="<<min; 
    }
};

int main()
{
    Min a(10);
    a.create();
    a.min();
}