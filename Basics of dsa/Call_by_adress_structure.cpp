#include<iostream>
using namespace std;
struct rec
{
    int len;
    int brea;
};

void area(struct rec *r1)
{
    r1->len=20;
    cout<<r1->len<<"\t"<<r1->brea;
}
int main()
{
    struct rec r;
    
    cin>>r.len;
    cin>>r.brea;
    area(&r);
    cout<<"\n"<<r.len<<"\t"<<r.brea<<"\n";
    
}