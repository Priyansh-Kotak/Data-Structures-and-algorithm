#include<iostream>
#include<stdlib.h>
using namespace std;
struct rec
{
    int len;
    int brea;
};
void showdata(rec *p)
{   
    cout<<p->len<<"\n"<<p->brea<<"\n";

}


int main()
{
    struct rec *p;
    p=new rec;
   // p->len=10;
    //p->brea=15;

    cin>>p->len;
    cin>>p->brea;
    showdata(p);

    //cout<<p->len<<"\n";
    //cout<<p->brea<<"\n";

    
    return 0;
}