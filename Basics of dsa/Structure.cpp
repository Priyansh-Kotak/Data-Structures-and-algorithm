#include<iostream>
#include<string.h>
using namespace std;
struct emp
{
    int emp_id;
    string name;
    int salary;
    string goal;
    friend void showdata(emp a[n]);
};
void showdata(emp a[n])
{

}

int main()
{
    int n,i;
    cout<<"Enter how many employee do you want to enter :";
    cin>>n;
    
    struct emp a[n];
   
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter emp_id";cin>>a[i].emp_id;
        cout<<"Enter name of the employee :";cin>>a[i].name;
        cout<<"Enter salary :";cin>>a[i].salary;
        cout<<"Enter goal :";cin>>a[i].goal;
    }
    
    
}