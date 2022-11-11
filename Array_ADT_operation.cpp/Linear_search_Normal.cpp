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
        length = 10;
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
                cout<<"The searched number is located at "<<i<<" index";
            }
            
        }

    }
};

int main()
{
    Array ar(10);
    ar.create();
    ar.search_normal();
}