#include<iostream>
using namespace std;
class Array
{
    int *A;
    int size;
    int length;
    public:

    Array(int size)
    {
        A=new int[size];
    }

    void create()
    {
        length =3;
        cout<<"Enter the 3 elements in the array :";
        for (int i = 0; i < length; i++)
        {
            cin>>A[i];
        }
    }

    void display()
    {
        cout<<"\n"<<"Elements in the array :";
        for (int i = 0; i < length; i++)
        {
            cout<<A[i]<<"\n";
        }
        
    }
    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};
int main()
{
    Array ar(10);
    ar.create();
    ar.display();


}
