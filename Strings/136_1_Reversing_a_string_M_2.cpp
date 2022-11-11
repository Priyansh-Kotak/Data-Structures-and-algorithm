#include <iostream>
using namespace std;
class reverse
{
    char s[111];

public:
    reverse()
    {
        gets(s);
    }

    void rev()
    {
        int i, j;
        char t;
        for (j = 0; s[j] != '\0'; j++)
        {

        }

        j = j - 1;
        for (i = 0; i < j; i++, j--)
        {
            t = s[i];
            s[i] = s[j];
            s[j] = t;
        }
        cout << s;
    }
};

int main()  
{
    reverse a;
    a.rev();
}