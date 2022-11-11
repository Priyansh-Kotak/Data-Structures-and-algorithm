#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    // Method 1 of declaring 2D array 

    int A[3][4]={{1,2,3,4},{2,4,6,80},{3,5,7,9}};       
    
    
   // Method 2 of declaring 2D array  
           
    int *B[3];                                          

    for (int i = 0; i < 3; i++)
    {
            B[i] = new  int[3];
            cin >> *B[i];
    }



    //Method 3 of declaring array 


    int **C;

    *C= new int[3];
    for (int i = 0; i < 4; i++)
    {
        C[i]= new int[4];
        cin>> *C[i];
    }
    








    
}