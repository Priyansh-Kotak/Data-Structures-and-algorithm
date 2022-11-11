#include<iostream>
using namespace std;
class words
{
    char s[100];
    public:

    words()
    {
        gets(s);
    }

    void count()
    {
        int scount=0;
        int wcount=0;
        for (int i = 0; s[i]!='\0'; i++)
        {
            if (s[i]==' ')
            {
                scount++;
            }
            
        }
        wcount=scount+1;
        cout<<"No of words  in a string : "<< wcount<<endl;


        
    }

};


int main()
{
    words a;
    a.count();
    
}