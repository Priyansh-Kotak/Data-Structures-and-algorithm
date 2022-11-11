#include<iostream>
using namespace std;
class duplicate
{
    int *A,*B;
    int length1,length2,size;
    public:
    duplicate(int size)
    {
        A=new int[size];
        B=new int[size];
    }

    void create()
    {
        length1 = 10;
        cout<<"\n"<<"Start putting the elements :";
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }
    
        
    }

    void hashing()
    {        
        int max=0;
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }

        
    }



};