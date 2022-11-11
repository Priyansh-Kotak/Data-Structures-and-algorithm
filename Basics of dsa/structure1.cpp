#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    char x;
};
int main()
{
    struct rectangle r={10,6};
    cout<<sizeof(r);
    r.length=99;
    r.breadth=23;
    
    cout<<r.length;
    cout<<r.breadth;
    

}