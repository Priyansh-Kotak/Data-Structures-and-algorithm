#include <iostream>
using namespace std;
class reverse
{
    char s[111], r[111];

public:
    reverse()
    {
        gets(s);
    }

    void rev()
    {
        int i,j;
        for ( i = 0; s[i]!='\0'; i++)
        {
            
        }
        i=i-1;
        for( j=0 ; i>=0 ; i-- , j++)
        {
            r[j]=s[i];
        }

        r[j]='\0';
        cout<<r;
        
    }
};


int main()
{
    reverse a;
    a.rev();
}