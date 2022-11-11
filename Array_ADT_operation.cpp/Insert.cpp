#include<iostream>
using namespace std;
class Array 
{
    int *A;
    int length, size;
    public:

    Array(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length =3;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
    }

    void insert()
    {
        for (int i = length ; i > 1 ; i--)
        {
            A[i]=A[i-1];
        }
        A[1]=8;
        length++;
        
    }

    void display()
    {
        cout<<"Modifed array :";
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];
        }
        
    }
};

int main()
{
    Array ar(10);
    ar.create();
    ar.insert();
    ar.display();


}