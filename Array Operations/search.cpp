#include<iostream>
using namespace std;

bool searchItem(int arr[], int size, int value)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int size = 9;
    bool result = searchItem(arr, size, 11);
    cout<<result<<endl;
    return 0;
}