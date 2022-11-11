#include<iostream>
using namespace std;
class Sum
{
    int *A;
    int length,size;
    public:
    Sum(int size)
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
        for (int i = 0; i < length; i++)
        {
            sum=sum+A[i];
            
        }
        cout<<"Sum num ="<<sum;
             

    }
};

int main()
{
    Sum a(10);
    a.create();
    a.sum();
}