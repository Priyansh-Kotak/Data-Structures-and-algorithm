#include <iostream>
using namespace std;
class pallindrome
{
    char a[111], b[111];

public:
    pallindrome()
    {
        gets(a);
    }
    void reverse()
    {
        int i, j;
        for (i = 0; a[i] != '\0'; i++)
        {
        }
        i = i - 1;
        for (j = 0; i >= 0; i--, j++)
        {
            b[j] = a[i];
        }
        b[j] = '\0';
        cout << b << endl;
    }
    void check()
    {

        int flag = 0;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] != b[i])
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "Not a pallindrome " << endl;
        }
        else
        {
            cout << "String is a pallindrome " << endl;
        }
    }
};

int main()
{
    pallindrome a;
    a.reverse();
    a.check();
}