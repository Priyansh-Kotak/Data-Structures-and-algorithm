#include<iostream>
using namespace std;
struct rec
{
    int len;
    int bre;
};

void intial(struct rec *r,int l,int b)
{
    r->len =l;
    r->bre =b;
}

int area(struct rec r)
{
    return r.len * r.bre;
}
void change(struct rec *r)
{
    r->len=20;
}





int main()
{
    struct rec r;
    int a;
    intial(&r,10,5);
    a= area(r);
    change(&r);
    cout<<"Area :"<<a<<"\n"<<r.len<<"\n"<<r.bre;

}