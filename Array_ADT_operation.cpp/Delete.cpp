#include<iostream>
#include<stdlib.h>
using namespace std;

class Array
{
    int *A;
    int size;
    int length;
    public:

    Array(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length= 2;
        cout<<"Enter element in the array ";
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        
    }

    void del()
    {
        int x=0;
        int i;
        x=A[1];
        cout<<"\n Length = "<< length;
        for(i=2;i<length-1;i++)
        A[i]=A[i+1];
        length--;
        
    }

    void display()
    {
        cout<<"\n"<<"Modifed array :";
        for (int i = 0; i < length; i++)
        {
            cout<<"\n"<<A[i];
        }
        
    }



};

int main()
{
    Array ar(10);
    ar.create();
    ar.del();
    ar.display();
}
