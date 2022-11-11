#include <iostream>
using namespace std;

int main()
{
    char *s, *r;
    s = new char(100);
    r = new char(100);
    gets(s);
    int a, b;
    for (a = 0; s[a] != '\0'; a++)
    {

    }
    a = a - 1;
    for (b = 0; a >= 0; b++, a--)
    {
        r[b] = s[a];
    }
    r[b] = ' ';
    b++;
    r[b] = '\0';
    // cout << r;
    char *n = new char(100);
    int k = 0,i=0;
    do
    {
        if (r[i] == ' ' )
        {
            
            int l=i;
            int j = l -1;

            while (j >= 0 )
            {
                {
                    n[k] = r[j];
                    k++;
                    j--;
                }
                if(r[j] == ' ')
                {
                    break;
                }
            }   

            n[k]=' ';
            k++;
        }       

        i++;

    }while(r[i] != '\0');
    n[k] = '\0';

    cout<<"\n";

    cout<<n;
}