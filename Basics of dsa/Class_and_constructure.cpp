#include<iostream>
using namespace std;
class rec
{
    int len;
    int brea;
    public:
    rec(int a,int b)
    {
        cout<<a<<"\t"<<b;
    }
    int area ()
    {
        return len * brea;
    }
    void changelength(int o)
    {
        len=o;
        cout<<len;
    }
};
int main()
{
    rec r(10,5);
    cout<< r.area();    
    r.changelength(3);
    
    

}