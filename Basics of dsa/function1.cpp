#include<iostream>
using namespace std;
int area(int l,int b)
{
    int a;
    a= l*b;
    return a;
}
int peri(int l,int b)
{
    int p;
    p=2*(l+b);
    return b;
}










int main()
{
    cout<<area(10,20)<<"\n";
    cout<<peri(10,20)<<"\n";
}