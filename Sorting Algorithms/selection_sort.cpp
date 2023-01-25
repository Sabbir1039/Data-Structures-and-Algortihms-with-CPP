#include<iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
    for(int i=0; i<n-1; i++){
        int iMin = i;
        for(int j=i+1; j<=n-1; j++){
            if(A[j]<A[iMin]){
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main()
{
    int n = 5;
    int A[n] = {4,1,3,9,7};
    SelectionSort(A, n);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}