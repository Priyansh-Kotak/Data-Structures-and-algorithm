#include <iostream>
using namespace std;
class cmatrix
{
    int n;
    int *A;

public:
    cmatrix()
    {
        n = 2;                        // Total number of dimensions 2x2 or total number of rows
        A = new int[2 * (2 + 1) / 2]; // As there are n(n+1)/2 non zero elements
    }
    cmatrix(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2]; // Total no. of non zero elements in the A array.
    }

    void set(int i, int j, int x); // x= element whichcwe want to put inside the array.
    int get(int i, int j);
    void display();
};

void cmatrix::set(int i, int j, int x)
{
    if (i >= j)
    {
        A[n * (j - 1) - ((j - 2) * (j - 1) / 2) + (i - j)] = x;
    }
}

int cmatrix ::get(int i, int j)
{
    if (i >= j)
    {
        return A[n * (j - 1) - ((j - 2) * (j - 1) / 2) + (i - j)];
    }
    else
        return 0;
}

void cmatrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[n * (j - 1) - ((j - 2) * (j - 1) / 2) + (i - j)] << " ";
            }
            else 
            cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{

    int d;
    cout << "Enter the dimensions :";
    cin >> d;
    cmatrix a(d);
    int x;
    cout << "Enter the elements :";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            a.set(i, j, x);
        }
    }
    cout << "Displaying the elements :" ;
    cout<<"\n";

    a.display();
}