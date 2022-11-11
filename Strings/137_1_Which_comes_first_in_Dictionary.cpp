#include <iostream>
using namespace std;
class dictionary
{
    char a[111], b[111];

public:
    dictionary()
    {
        gets(a), gets(b);
    }

    void toggling()
    {
        int i, j;
        for (i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] += 32;
            }

            if ((b[i] >= 65 && b[i] <= 90))
            {
                b[i] += 32;
            }
        }

        // cout << a << endl;
        // cout << b;
    }

    void check()
    {
        int j, i;
        for (i = 0, j = 0; a[i] != '\0' && b[i] != '\0'; i++, j++)
        {
            if (a[i] != b[i])
            {
                cout << "Both the string are not same " << endl;
                break;
            }
        }
        if (a[i] == b[j])
        {
            cout << "Equal";
        }

        else if (a[i] < b[j])
        {
            cout << "Smaller";
        }
        else
        {
            cout << "Greater";
        }
    }
};

int main()
{
    dictionary a;
    a.toggling();
    a.check();
}
