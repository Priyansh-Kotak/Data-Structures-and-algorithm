#include<iostream>
using namespace std;
void perm(char s[],int k)
{
    static int A[10]={0};
    static char Res[0];
    int i;
    if (s[k]=='\0')
    {
        Res[k]='\0';
        // for (int i = 0; Res[i]='\0'; i++)
        // {
        //     cout<<Res[i];
        // }
        cout<<"\n";
        cout<<Res;

    }

    else
    {
        for (int i = 0; s[i]!='\0'; i++)
        {
            if (A[i]==0)
            {
                Res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
            
        }
        
    }
    
}




int main()
{
    char s[]="ABC";
    perm(s,0);
    cout<<s;
}