#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size in the array";
    cin>>n;
    int A[n];
    for( i=0 ;i<n; i++)
    {
        cout<<"Enter the value :";
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}