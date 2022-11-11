#include<iostream>
//using namespace std;
using namespace std;
struct rec
{
    int len;
    int brea;
};
int main()
{
    struct rec r= {1,2};                     // Calling without poiter                         
    cout<<r.len<<"\n";
    cout<<r.brea<<"\n";

    struct rec *p=&r;                       // Calling with pointer 
    cout<<p->len<<"\n";
    cout<<p->brea<<"\n";
}
