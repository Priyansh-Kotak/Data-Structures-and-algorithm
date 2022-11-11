#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5};
    int *p;
    //cout<<"Size of the arry"<<sizeof(A);
    p=A;
    int i,count=0;
    int n= sizeof(A);
    cout<<n<<endl;
    int len= sizeof(A)/sizeof(A[0]);
    cout<<len<<endl;
    for ( i = 0; i < len; i++)
    {
        cout<<A[i];                     // Method without pointer
    }
    cout<<endl;

    for ( i = 0; i < len; i++)
    {
        cout<<p[i];                    // Method 2 with pointer                               // Array is always created inside the stack
    }
    
    
    
    /*for (int i = 0; i < sizeof(A); i++)
    {
        cout<<A[i];
    }
    */
}