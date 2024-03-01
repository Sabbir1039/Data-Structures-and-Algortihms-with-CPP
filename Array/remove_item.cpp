#include<iostream>
using namespace std;

void printArray(int A[], int size)
{
    for(int i=0; i<size; i++) {
        cout<< A[i] <<" ";
    }
    return;
}

void removeEnd(int arr[], int &size)
{
    if(size == 0) {
        cout<<"Array is empty!"<<endl;
        return;
    }
    else {
        size--;
        return;
    }
}

void removeNth(int arr[], int &size, int pos)
{
    if( pos<1 || pos>size) {
        cout<<"Invalid position!";
        return;
    }
    else if(pos == size) {
        size--;
        return;
    }
    else {
        for(int i=pos; i<size; i++) {
            arr[i-1] = arr[i];
        }
        size--;
        return;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // removeEnd(arr, size);
    removeNth(arr, size, 1);
    printArray(arr, size);
    return 0;
}