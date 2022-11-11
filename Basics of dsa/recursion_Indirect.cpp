#include<iostream>
using namespace std;
void funB(int );
void funA(int n)
{
    if (n>0)
    {
        cout<<n<<"\n";
        funB(n-1);
    }    
}

void funB(int n)
{
    if (n>0)
    {
        cout<<n<<"\n";
        funA(n/2);
    }
    
}
int main()
{
    int x=20;
    funA(x);
}