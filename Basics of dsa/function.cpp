#include<iostream>
using namespace std;
int add(int a, int b)
{
    int c=a+b;
    return c;
}

int main()
{
    int a=5,b=10,d;
    d=add(a,b);
    cout<<d;

}