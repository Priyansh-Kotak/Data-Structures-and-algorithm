#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=5,b=10;
    int *p,*q;
    p=&a; q=&b;                 // Method 1 for passing by adress
  //  swap(p,q);                   // Method 1 for passing by adress
    swap(&a,&b);                // Method 2 of passing by aderess 
    cout<<a<<"\n"<<b;
    
}