#include<iostream>
// #include<string>
using namespace std;
class toggling
{
    char s[100];
    public:
    toggling()
    {        
        cout<<"Enter your string :";
        gets(s);
        // cout<<"\n "<<s;
    }

    void Toogling()
    {
        int i;
        for ( i = 0; s[i]!='\0'; i++)
        {
            if (s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
            else if (s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
            
            
        }
        cout<<s<<endl;
        
    }    

};

int main()
{
    toggling a;
    a.Toogling();
}

