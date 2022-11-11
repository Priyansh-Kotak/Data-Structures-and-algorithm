#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int key;
    cout << "\nEnter the num you want to search :- ";
    cin >> key;

    int flag = 0;

    int length = sizeof(A) / sizeof(A[0]);

    cout<<"Length :-"<<length;

    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
        {
            if (i != 0)
            {
                swap(A[i], A[i - 1]);
                flag = 1;
            }
            else
                flag = 1;
        }
    }

    if (flag == 1)
        cout << "\nElement is found !!!";
    else
        cout << "\nOppsss..............Better luck net time";
}