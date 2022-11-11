#include<iostream>
using namespace std;
struct rec
{
    int len;
    int brea;
};
void area(struct rec r1 )
{
    r1.len=20;
    cout<< r1.len<<"\n"<< r1.brea;
}





int main()
{
    struct rec r;
    cin>>r.len;
    cin>>r.brea; 
    cout<<r.len;
    cout<<r.brea<<"\n";
    area(r);

}