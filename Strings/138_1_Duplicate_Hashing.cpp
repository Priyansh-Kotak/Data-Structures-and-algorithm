#include <iostream>
using namespace std;
class duplicate
{
    char a[111];
    int H[26];

public:
    duplicate()
    {
        cout << "Enter you string :" << endl;
        gets(a);
        for (int i = 0; i < 26; i++)
        {
            H[i] = 0;
            // cout << H[i];
        }
    }

    void duplic()
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            H[a[i] - 97] += 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (H[i] > 1)
            {
                char j = i + 97;
                cout << j;
                cout << H[i] << endl;
            }
        }
    }
};

int main()
{
    duplicate a;
    a.duplic();
}
