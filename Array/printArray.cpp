#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++) {
        cout<< arr[i] <<" ";
    }
    return;
}

void printReverse(int arr[], int size)
{
    if (size == 1) {
    cout << arr[0] << " ";
    return;
    }

    printReverse(arr + 1, size - 1); // Recursively call for the subarray excluding the first element
    cout << arr[0] << " ";
}

int main() 
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printArray(arr, size);
    printReverse(arr, 5);
    return 0;
}