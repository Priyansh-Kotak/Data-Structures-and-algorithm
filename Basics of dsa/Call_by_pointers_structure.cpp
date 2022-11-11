#include<iostream>
using namespace std;
struct rec 
{
    int len;
    int brea;
};

struct rec *func()
{
    struct rec *p;
    p=new rec;
    p->len=15;
    p->brea=22;
    return p;

}

int main()
{
    struct rec *p=func();
    cout<<p->len<<"\t"<<p->brea;
}