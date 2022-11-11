#include<iostream>
using namespace std;
class sorted
{
    int *A;
    int length,size;
    public:
    sorted(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length=4;
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
        
    }

    void sort()
    {
       for (int i = 0; i < length - 1; i++) 
       {
            for (int j = i + 1; j < length; j++) 
            {


                if (A[i] > A[j]) 
                {

                    //swapping with smallest element of array.

                    int temp = A[j];

                    A[j] = A[i];

                    A[i] = temp;


                }

            }

        }
        cout << "|sorted array|" << endl;

        for (int i = 0; i < length; i++) 
        {

            cout << A[i] << " ";


        }

    }


    void insert()
    {
        int x;
        cout<<"\n"<<"Enter which number do you want to insert into the array";
        cin >>x;
        int i=length-1;
        while (A[i]>x)
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=x;

        cout<<"\n"<<"Array after insertion :";

        for (int i = 0; i <= length; i++)
        {
            cout<<A[i];
        }
    }

};

int main()
{
    sorted a(10);
    a.create();
    a.sort();
    // a.getdata();
    a.insert();
}