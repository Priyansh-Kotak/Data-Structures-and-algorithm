#include<iostream>
using namespace std;
class validate
{
    char s[111];
    public:
    validate()
    {
        gets(s);
    }
    void valid()
    {
        int flag =0;
        for (int i = 0; s[i]!='\0'; i++)
        {
            if ((s[i]>= 65 && s[i]<= 90) || (s[i]>=97 && s[i] <= 122)||(s[i] == 48 && s[i]==44 && s[i] >=50 && s[i]<= 57))
            {
                flag=1;
            }
            
            
        }

        if (flag ==1)
        {
            cout<<"String is valid ";
        }
        else
        {
            cout<<"String is not valid";
        }
        
        
    }
};


int main()
{
    validate a;
    a.valid();
    
    {
        /* code */
    }
    
}