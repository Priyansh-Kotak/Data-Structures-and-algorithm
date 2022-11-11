#include<iostream>
using namespace std;
class Avg
{
    int *A;
    int length,size;
    public:
    Avg(int size)
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

    void sum()
    {
        int sum=0;
        float avg;
        for (int i = 0; i < length; i++)
        {
            sum=sum+A[i];
            
        }
        avg=sum/2;
        cout<<"Avg num ="<<avg;
             

    }
};

int main()
{
    Avg a(10);
    a.create();
    a.sum();
}