#include<iostream>
using namespace std;
int * func(int n)
{
    int *p;
    p=new int(n);
    return p;
}

int main()
{
    int *A;
    A=func(5);

}