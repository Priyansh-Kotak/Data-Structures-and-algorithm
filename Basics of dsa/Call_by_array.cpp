#include<iostream>
using namespace std;
int * array(int n)
{
    int *p;
    p=new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>> p[i];
        fflush;
    }
    return p;
    
}
int main()
{
    int *a,n;
    cout<<"Enter size :";
    cin>>n;
    a= array(n);            
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
        fflush;
    }
    
}