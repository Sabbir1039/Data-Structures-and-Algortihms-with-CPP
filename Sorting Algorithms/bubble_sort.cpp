#include<iostream>
using namespace std;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void BubbleSort(int A[], int n)
{
    for(int i=1; i<n-1; i++){
        int flag = 0;
        for(int j=0; j<=n-i-1; j++){
            if(A[j]>A[j+1]){
                Swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }
        if(flag == 1){
            break;
        }
    }
}

int main()
{   
    int n = 6;
    int A[6] = {3,1,4,3,6,6};
    BubbleSort(A, n);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}