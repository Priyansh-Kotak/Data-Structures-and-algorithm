#include <iostream>
using namespace std;
class vowels
{
    char s[111];

public:
    vowels()
    {
        gets(s);
    }

    void vow()
    {
        int vcount = 0;
        int ccount=0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]== 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vcount = vcount + 1;
            }
            else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            {
               ccount=ccount +1;
            }
            
        }
        cout <<"Consonants :"<< ccount<<endl;
        cout<<"Vowels : "<<vcount;
    }
};

int main()
{
    vowels a;
    a.vow();
}