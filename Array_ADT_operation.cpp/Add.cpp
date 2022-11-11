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
        length= 3;
        cout<<"Enter element in the array ";
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        
    }

    void add()
    {
        A[3]=5;
        length++;
    }

    void display()
    {
        cout<<"Modifed array :";
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
    ar.add();
    ar.display();
}
