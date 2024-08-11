#include<iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = arr[0];

    for(int i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int max = arr[0];

    for(int i=1; i<size; i++)
    {
        if(arr[i] < max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Max element in array: "<<findMax(arr, size)<<endl;
    cout<<"Min element in array: "<<findMin(arr, size)<<endl;
    return 0;
}