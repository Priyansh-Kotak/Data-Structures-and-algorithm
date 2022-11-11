// For Diagonal matrix
// Same for all the matrics.

#include <iostream>
using namespace std;
void main()
{
    int *A, n, ch, x;
    cout << "Enter dimensions :";
    cin >> n;
    A = new int[n];
    do
    {
        /* Menu
        1. Create
        2. Get
        3. Set
        4. Display
        */

        switch (ch)
        {
            int i, j;
        case 1:
            for (i = 0; i <= n; i++)
            {
                cin >> A[i - 1];
            }
            break;

        case 2:
            cout << "Enter indices :";
            cin >> i >> j;
            if (i == j)
            {
                cout << A[i - 1];
            }
            else
                cout << "0 ";
            break;

        case 3:

            cout << "Enter row and col :";
            cin >> i >> j >> x;
            if (i == j)
            {
                A[i - 1] = x;
            }

            break;

        case 4:
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (i == j)
                    {
                        cout << A[i - 1];
                    }
                    else
                    {
                        cout << "0 ";
                    }
                }

                cout << "\n";
            }
        }
    } while (true);
}