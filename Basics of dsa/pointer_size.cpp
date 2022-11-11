#include<iostream>
using namespace std;
struct size
{
    int length;
    int breadth;
};

int main()
{
    int *p1;
    char *p2;
    double *p3;
    struct size *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p3)<<endl
    //cout<<sizeof(p4)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p5)<<endl;
}