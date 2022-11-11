#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int  &r= a;                 // Adress of a is given to r
    r++;
    cout<<r<<endl;
    cout<<a;


}