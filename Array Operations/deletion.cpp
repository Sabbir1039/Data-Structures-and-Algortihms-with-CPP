#include<iostream>
using namespace std;

void deleteAtNth(int arr[], int &size, int index)
{
    for(int i=index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}

int main()
{
    int arr[] = {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int size = 9;
    int pos = 3;
    deleteAtNth(arr, size, pos);

    cout<<"New size of array: "<<size<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}