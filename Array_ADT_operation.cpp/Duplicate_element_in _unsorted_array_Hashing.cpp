#include<iostream>
using namespace std;
class hashing
{
    int length1, length2 ,size;
    int *A,*H;
    public:
    hashing(int size)
    {
        A=new int[size];
        H=new int[size];
    }

    void create()
    {
        length1 = 10;
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }
        cout<<"\n"<<"Finding max num in Array A ";
        int max=A[0];
        for (int i = 0; i < length1; i++)
        {
            if (A[i]>max)
            {
                max= A[i];
            }            
        }
        length2=max;

        for (int  i = 0; i < length2; i++)
        {
            H[i]=0;
        } 
        
        
    }

};

int main()
{
    hashing a(20);
    a.create();
}