#include<iostream>
using namespace std;
class Get
{
    int *A;
    int length,size;
    public:
    Get(int size)
    {
        A=new int[size];
    }

    void create()
    {        
        length = 5;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        

    }

    void get()
    {
        int index;
        cout<<"Enter the index numebr that you want to search :";
        cin>>index;
        if (index>=0 && index<=length)
            {
                cout<<A[index];   
            }            
              

    }
};

int main()
{
    Get a(10);
    a.create();
    a.get();

}