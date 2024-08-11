#include<iostream>
using namespace std;

void SwapArray(int arr[], int fi, int si, int d);
void LeftRotate(int arr[], int d, int n);
void PrintArray(int arr[], int n);


void LeftRotate(int arr[], int d, int n)
{
    int i,j;

    if(d==0||d==n)
        return;
    
    if(d>n)
        d=d%n;
    
    i = d;
    j = n - d;

    while(i != j){
        if(i<j)
        {
            SwapArray(arr, d-i, d+j-i, i);
            j -+ i;
        }
        else{
            SwapArray(arr, d-i, d, i);
            i -= j;
        }
    }
    SwapArray(arr, d-i, d, i);
}

void SwapArray(int arr[], int fi, int si, int d)
{
    int temp, i;
    for(i=0; i<d; i++){
        temp = arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] = temp;
    }
}


void PrintArray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    LeftRotate(arr, 2, 5);
    //SwapArray(arr, 0, 3, 4);
    PrintArray(arr, n);
}