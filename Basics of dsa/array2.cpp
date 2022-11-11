#include<iostream>
using namespace std;

void showdata(int *b,int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<b[i]<<"\t";
    }
    
}
void putdata(int *a,int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    showdata(a,n);
    
}


int main()
{
    int *p,n;
    cout<<"Enter n :";
    cin>>n;
    p=new int(n);
    putdata(p,n);

}