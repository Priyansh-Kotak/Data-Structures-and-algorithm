#include<iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"\nEnter key to be searched";
    cin >> key;

    int l,h,mid;

    int length = sizeof(A)/ sizeof(A[0]);

    l = 0;  h = length -1 ;
    
    int flag =0;
    

    while(l <= h)
    {
        mid = (l+h)/2;

        if(key == A[mid] )
        {
            flag=1;
            break;
        }

        else
        {
            if(key < A[mid])
            {
                h = mid-1;
                continue;
            }

            else if(key > A[mid])
            {
                l = mid +1;
                continue;
            }
        }
        
    }


    if(flag==1)
        cout<<"Yahooo...........Search successful";

    else 
        cout<<"Opppss...............Better luck next time";
}