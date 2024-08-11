// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include<iostream>
using namespace std;

void traverseArray(int arr[], int size);

int* rotateBruteForce(int arr[], int size, int rn)
{
    rn = rn % size;
    int* temp = new int[size];

    int j = 0;
    for(int i=size-rn; i<size; i++)
    {
        temp[j] = arr[i];
        j++;
    }
    for(int k=0; k<size-rn; k++)
    {
        temp[j] = arr[k];
        j++;
    }
    return temp;
}

void reverse(int arr[], int start, int end)
{
    
    while(start<end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }
}

void rotateUsingReverse(int arr[], int size, int rn)
{
    rn %= size;
    reverse(arr, 0, size-1);
    reverse(arr, 0, rn-1);
    reverse(arr, rn, size-1);
}


void traverseArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int rn = 3;

    // int* result = rotateBruteForce(arr, size, rn);
    rotateUsingReverse(arr, size, rn);

    traverseArray(arr, size);

    // delete[] result;
    return 0;
}