#include<iostream>
using namespace std;
class length
{
    char str[20];
    public:
    length()
    {
        cout<<"Enter your string :";
        gets(str);
        cout<<str;
    }

    void len()
    {
        int i;
        for (i = 0; str[i]!='\0'; i++)
        {
            /* code */
        }
        cout<<"\n Length of the string : "<<i;
        
    }

};


int main()
{
    length a;
    a.len();
}