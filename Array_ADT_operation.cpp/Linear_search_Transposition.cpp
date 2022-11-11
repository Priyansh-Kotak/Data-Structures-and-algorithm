#include<iostream>
using namespace std;
class Array
{
    int *A;
    int length,size;
    public:
    Array(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length = 4;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }       
    }

    void search_normal()
    {
         int key;
        cout<<"Enter number you want to search :";
        cin>>key;
        for (int i = 0; i < length; i++)
        {
            if (key==A[i])
            {
                swap(A[i],A[i-1]);
                cout<<"The searched number is located at "<<i<<" index";
            }
            
        }
        for (int i = 0; i < length; i++)
        {
            if (key==A[i])
            {
                swap(A[i],A[i-1]);
                cout<<"The searched number is located at "<<i<<" index";
            }
            
        }
        
        //cout<<"The searched number is located at "<<i<<" index";
        

    }
};

int main()
{
    Array ar(10);
    ar.create();
    ar.search_normal();
}