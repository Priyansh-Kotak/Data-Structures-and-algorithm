#include<iostream>
using namespace std;
class Reverse
{
    int *A,*B;
    int length,size;
    public:
    Reverse(int size)
    {
        A=new int[size];
        B=new int[size];
    }
    
    void create()
    {
        length=5;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }        
    }

    //Method 1 :-
    void rev_1()
    {
        for (int i = length-1; i >= 0 ; i--)
        {
            cout<<A[i];
        }
    }

    //Method 2 :-
    void rev_2()
    {
       for (int i = length-1,j=0 ; i >= 0 ; i--,j++)
       {
            B[j]=A[i];
       }
       cout<<"\n";
       for (int i = 0; i < length; i++)
       {
            A[i]=B[i];
            cout<<A[i];
       }
       
    }


    
    //Method 3 :-
    void rev_3()
    {
        cout<<"\n";
        for (int i = 0, j=length-1 ; i < j; i++,j--)
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        for (int j = 0; j < length; j++)
        {
            cout<<A[j];
        }
        
    }



};

int main()
{
    Reverse a(10);
    a.create();
    a.rev_1();
    a.rev_2();
    a.rev_3();
}