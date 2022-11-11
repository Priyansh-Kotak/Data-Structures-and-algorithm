#include<iostream>
using namespace std;
int fib(int n)
{
    int to=0,t1=1,s,i;
    if (n<=1)
    {
        return n;
    }
    for ( i = 2; i <= n; i++)
    {
        s=to+t1;
        to=t1;
        t1=s;
    }
    return s;
    
    
}
int main()
{
    int x=5;
    int a=fib(x);
    cout<<a;
}