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
        length= 5;
        cout<<"Start entering the elements into the array :";
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        
    }
    void BinSearc()
    {
        int key,l,h,mid;
        cout<<"Enter number you want to search :";
        cin>>key;
        l=0;
        h=length - 1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if (key==A[mid])
            {
                cout<<"Searched element is present at "<<mid<<" index";break;
            }
            else if (key<A[mid])
            {
                h=mid-1;
            }
            else if (key>A[mid])             
            {
                l=mid + 1;
            }
            else
            {
                cout<<"Number that you want to search is not found";
            }
            
            
        }
        

    }
};

int main()
{
    Array ar(10);
    ar.create();
    ar.BinSearc();
}