#include<iostream>
using namespace std;
class missing 
{
    int *A;
    int size,n;
    public:
    missing(int size)
    {
        A=new int[size];
    }


    void create()
    {        
        n=4;
        cout<<"\n"<<"Strat entering the elements :";
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        
    }

    void elements()
    {
        int sum=0,s;
        int d=A[n-1];
        int me;
        for (int i = 0; i < n; i++)
        {
            sum=sum+A[i];
        }

        cout<<"Sum of the elements in the array :"<<sum<<endl;
        s=d*(d+1)/2;
        cout<<"Sum of n natural elements :"<<s<<endl;
        me=s-sum;
        cout<<"\n"<<"Missing element ="<<me;
        

    }
};


int main()
{
    missing a(10);
    a.create();
    a.elements();

}