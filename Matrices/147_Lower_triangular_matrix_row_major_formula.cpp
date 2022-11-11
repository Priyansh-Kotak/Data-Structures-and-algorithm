#include <iostream>
using namespace std;
class ltmatrix
{
    int n;
    int *A;

public:
    ltmatrix()
    {
        n = 2;                        // Total number of dimensions 2x2 or total number of rows
        A = new int[2 * (2 + 1) / 2]; // As there are n(n+1)/2 non zero elements
    }
    ltmatrix(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];   // Totoal no. of non zero elements which is to be stored in A array. 
    }
    void Set(int i, int j, int k);
    int Get(int i, int j);
    void Display();
};

void ltmatrix ::Set(int i, int j, int x)
{
    if (i >= j)
    {
        A[i * (i - 1) / 2 + j - 1] = x;
    }
}

int ltmatrix::Get(int i, int j)
{
    if (i >= j)
    {
        return A[i * (i - 1) / 2 + j - 1];
    }
    return 0;
}

void ltmatrix::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[i * (i - 1) / 2 + j - 1] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter Dimensions :";
    cin >> d;
    ltmatrix lm(d);
    int x;

    cout << "Enter all the elements :";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.Set(i, j, x);
        }
    }

    lm.Display();
}
