#include<iostream>
using namespace std; 
int main()
{
    int n=3;
    int *p;
    p=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<p[i];
    }
    
    

}