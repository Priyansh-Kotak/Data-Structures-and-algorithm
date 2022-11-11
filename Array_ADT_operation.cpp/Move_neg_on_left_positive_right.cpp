#include<iostream>
using namespace std;
class check
{
    int *A;
    int size,length;
    public:
    check(int size)
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
    

    // Method 1 of shifting negative num to left and positive to rigth which is just sorting : -
    void shifting()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = i+1; j < length; j++)
            {
                if (A[i]>A[j])
                {
                    int temp=A[j];
                    A[j]=A[i];
                    A[i]=temp;
                }
                
            }
            
        }

        cout<<"\n"<<"First method of sorting neg and posi num :";
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];
        }
    }



    // Method 2: -
    void shif_2()
    {
        int i=0;
        int j=length-1;
        while (i<j)
        {
            while (A[i]<0)
            {
                i++;
            }
            while (A[j]>=0)
            {
                j--;
            }
            if (i<j)
            {
                swap(A[i],A[j]);
            }   
            
            
        }
        cout<<"\n"<<"Second method of sorting neg and posi num :";
        for (int i = 0; i < length; i++)
        {
            cout<<A[i];
        }
        
    }




};


int main()
{
    check a(10);
    a.create();
    a.shifting();
    a.shif_2();
}