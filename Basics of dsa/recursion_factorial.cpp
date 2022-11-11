#include<iostream>
using namespace std;
int func(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    return func(n-1)*n;
}
int main()
{
    int x=5;
    int m=func(x);
    cout<<m;
}
