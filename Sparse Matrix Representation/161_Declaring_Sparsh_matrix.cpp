#include <iostream>
using namespace std;
class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparsh
{
private:
    int m;   // Rows
    int n;   // Coloums
    int num; // Total num of non zero elements

    Element *ele;

public:
    Sparsh(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[this->num];
    }
    ~Sparsh()
    {
        delete[] ele;
    }

    void read()
    {
        cout << "Enter non zero element :";
        for (int i = 0; i < num; i++)
        {
            cin >> ele[i].i;
            cin >> ele[i].j;
            cin >> ele[i].x;
        }
    }

    void diaplay()

    {
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ele[k].i == i && ele[k].j == j)
                {
                    cout << ele[k++].x << " ";
                }

                else
                    cout << "0";
            }

            cout << endl;
        }
    }
};


int main()
{
    Sparsh s1(5,5,5);
    s1.read();
    s1.diaplay();
    
}
