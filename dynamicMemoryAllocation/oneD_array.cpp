#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++) {
        cout<< arr[i] <<" ";
    }
    return;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter array element: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    printArray(arr, size);

    // deallocate memory
    delete[] arr;
    return 0;
}