#include<iostream>
using namespace std;

void reverseArr(int arr[], int n)
{
    if(n<=1)
    {
        return;
    }

    int start = 0, end = n-1;

    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}