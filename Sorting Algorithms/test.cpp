#include<iostream>
using namespace std;

void PrintArray(int* A, int n)
{
    cout<<"Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}

void InsertionSort(int* A, int n)
{
    for(int i=1; i<n; i++)
    {
        int value = A[i];
        int hole = i;
        while(hole>0 && A[hole-1]>value)
        {
            A[hole] = A[hole-1];
            hole = hole-1;
        }
        A[hole] = value;
    }
}
int main()
{
    int A[] = {5,1,3,7,8,4,5,9,0};
    int n = sizeof(A)/sizeof(int);
    InsertionSort(A,n);
    PrintArray(A,n);
    return 0;
}
