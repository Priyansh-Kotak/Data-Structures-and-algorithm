#include<iostream>
using namespace std;
class areth
{   
    int a,b;
    public:
    areth(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    int add()
    {
        int c= a+b;
        return c;
    }
    int sub()
    {
        int s= a-b;
        return s;
    }


};
int main()
{
    areth o1(15,20);
    cout<<o1.add()<<"\n";
    cout<<o1.sub()<<"\n";

}