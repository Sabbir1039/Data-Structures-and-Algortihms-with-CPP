#include<iostream>
using namespace std;


void insertAtEnd(int* &arr, int* size, int value)
{
    int* newArr = new int[*size+1];
    
    for(int i=0; i<*size; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[*size] = value;
    delete[] arr;
    arr = newArr;
    (*size)++;
}

void insertAtStart(int* &arr, int* size, int value)
{
    int* newArr = new int[*size+1];

    for(int i=0; i<*size; i++)
    {
        newArr[i+1] = arr[i];
    }
    newArr[0] = value;
    delete[] arr;
    arr = newArr;
    (*size)++;
}

void insertAtNth(int* &arr, int* size, int pos, int value)
{
    int* newArr = new int[*size+1];

    for(int i=0; i<pos-1; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[pos-1] = value;

    for(int j=pos; j<*size+1; j++)
    {
        newArr[j] = arr[j-1];
    }
    delete[] arr;
    arr = newArr;
    (*size)++;
}

int main()
{
    int size = 9;
    int* arr = new int[size] {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int pos = 3;

    cout<<"size of array: "<<size<<endl;

    insertAtEnd(arr, &size, -2);
    insertAtStart(arr, &size, 11);
    insertAtNth(arr, &size, pos, 4);

    cout<<"New size of array: "<<size<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}