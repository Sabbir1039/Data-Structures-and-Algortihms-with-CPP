#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++) {
        cout<< arr[i] <<" ";
    }
    return;
}

// naive solution O(n)
void reverseArray(int arr[], int size)
{
    for(int i=0; i<size/2; i++) {
        int temp  = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

// optimal solution O(n)
void reverseArray2(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray2(arr, 6);
    printArray(arr, size);
    return 0;
}