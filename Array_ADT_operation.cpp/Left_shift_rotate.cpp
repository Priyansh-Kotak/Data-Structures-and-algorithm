#include<iostream>
using namespace std;
class Left_shift
{
    int *A,*B;
    int length,size;
    public:
    Left_shift(int size)
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

    void left_shift()
    {
        int i,j;
        cout<<"\n"<<"Array after Left shift :";

        for (i = 1,j=0; i < length,j<length; i++,j++)
        {
           
            B[j]=A[i];              
            cout<<B[j];
        }  
       // B[length-1]=0; 
    }


    void rotate()
    {
        // B[4]=A[0];
        cout<<"\n"<<"Array after rotate :";
        int i,j;
        for (i = 1,j=0; i < length,j<length; i++,j++)
        {
            
            B[j]=A[i];              
            //cout<<B[j];
            
        }  
        B[length-1 ]=A[0];
        // cout<< "\n"<<B[length-1];
        // cout<<"\n";
        for (int j = 0; j < length; j++)
        {
            cout<<B[j];
        }       
         
    }
};

int main()
{
    Left_shift a(10);
    a.create();
    a.left_shift();
    a.rotate();
}