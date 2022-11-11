#include<iostream>
using namespace std;
int func(int n)
{
    if (n>0)
    {
        cout<<n;
        func(n-1);
        func(n-1);
    }
    
}
int main()
{
    int x=3;
    func(x);
}