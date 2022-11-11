#include<iostream>
using namespace std;
class Max
{
    int *A;
    int length,size;
    public:
    Max(int size)
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

    void max()
    {
        int max=A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i]>max)
            {
                max=A[i];
            }
            
        }
        cout<<"Max num ="<<max;
             

    }

    // void getdata()
    // {
    //     for (int i = 0; i < length; i++)
    //     {
    //         cout<<A[i];
    //     }
        
    // }
};

int main()
{
    Max a(10);
    a.create();
    a.max();
    //a.getdata();
}