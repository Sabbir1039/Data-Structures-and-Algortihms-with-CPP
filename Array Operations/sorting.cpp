#include<iostream>
using namespace std;

void sortArray(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {

        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int size = 9;
    sortArray(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}