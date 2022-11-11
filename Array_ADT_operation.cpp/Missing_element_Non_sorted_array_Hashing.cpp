#include<iostream>
using namespace std;
class missing 
{
    int *A;
    int *H;
    int size,length1,length2;
    public:
    missing(int size)
    {
        A=new int[size];
        H= new int[size]; 
    }


    void create1()
    {
        cout<<"\n"<<"Starting entering the elements into the array A";
        length1 = 10;
        length2=13;
        for (int i = 0; i < length1; i++)
        {
            cin>>A[i];
        }
        cout<<"\n"<<"Starting entering the elements into the array H";
        for (int i = 0; i < length2; i++)
        {
            cin>>H[i];
        }
    }

    void misele()
    {
        for (int i = 0; i < length1; i++)
        {
            H[A[i]]=1;
        }
        
        cout<<"Missing elements are : ";


        for (int i = 0 ; i <=length2; i++)
        {
            if (H[i]==0)
            {
                cout<<" "<<i;
            }
            
        }
        
    }
};


int main()
{
    missing a(15);
    a.create1();
    a.misele();


}