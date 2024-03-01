#include<iostream>
using namespace std;

void printArray(int A[], int size)
{
    for(int i=0; i<size; i++) {
        cout<< A[i] <<" ";
    }
    return;
}

void addItemEnd(int A[], int &size, int item)
{
    A[size] = item;
    size++;
    return;
}

void addItemNth(int arr[], int &size, int item, int pos)
{
    if(size == 0) {
        arr[size] = item;
        size++;
        return;
    }
    if( pos<=0 || pos>size) {
        cout<<"Invalid position!"<<endl;
        return;
    }

    for(int i=size-1; i>=pos-1; i--) {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = item;
    size++;
    return;
}

int main() 
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int item = 6;
    addItemNth(arr, size, item, 1);
    printArray(arr, size);
   
    return 0;
}