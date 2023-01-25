#include<iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
    for(int i=1; i<=n-1; i++){
        int value = A[i];
        int hole = i;
        while(hole>0 && A[hole-1]>value){
            A[hole] = A[hole-1];
            hole = hole-1;
        }
        A[hole] = value;
    }
}

int main()
{
    int n = 6;
    int A[6] = {2,7,4,1,5,3};
    InsertionSort(A, n);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}