#include <iostream>
using namespace std;
int main()
{
    char a[222], b[111];
    gets(a);
    gets(b);
    int H[26];
    for (int i = 0; i < 26; i++)
    {
        H[i] = 0;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97] += 1;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        H[a[i] != '\0'] -= 1;
        if (H[a[i] - 97] < 0)
        {
            cout << "Not Anagram " << endl;
            break;
        }

        else if (b[i]=='\0')
        {
            cout<<"It is anagram";
        }
        

    }
    
}














