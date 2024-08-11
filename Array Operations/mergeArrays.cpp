#include<iostream>
using namespace std;

void mergeTwoArrays(int arr1[], int arr2[], int arr3[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;

    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {0, 2, 4, 6, 8};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int n3 = n1 + n2;
    int finalArray[n3];
    mergeTwoArrays(arr1, arr2, finalArray, n1, n2);

    for(int i=0; i<n3; i++)
    {
        cout<<finalArray[i]<<" ";
    }

    return 0;
}