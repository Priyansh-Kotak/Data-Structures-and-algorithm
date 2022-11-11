#include<iostream>
using namespace std;
class areh
{
    int a,b;
    public:
    areh(int a,int b);
    void add();
    void sub();
};
areh::areh(int a,int b)
{
    this->a=a;
    this->b=b;
}
void areh::add()
{
    int c=a+b;
    cout<<"Add "<<c<<"\n";
}

void areh::sub()
{
    int s=a-b;
    cout<<"Sub"<<s;
}

int main()
{
    areh o1( 10,20);
    o1.add();
    o1.sub();
}