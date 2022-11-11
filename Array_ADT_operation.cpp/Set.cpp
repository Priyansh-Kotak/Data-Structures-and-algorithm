#include<iostream>
using namespace std;
class Set
{
    int *A;
    int length,size;
    public:
    Set(int size)
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

    void set()
    {
        int index,replace;
        cout<<"Enter the index that you want to replace the number :";
        cin>>index;
        cout<<"Enter the number that you want to replace :";
        cin>>replace;
        if (index>=0 && index<=length)
        {
            A[index]=replace;
        }       

    }

    void getdata()
    {
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];
        }
        
    }
};

int main()
{
    Set a(10);
    a.create();
    a.set();
    a.getdata();
}