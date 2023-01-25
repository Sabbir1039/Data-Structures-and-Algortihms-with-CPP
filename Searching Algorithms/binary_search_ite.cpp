#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if (x < arr[mid]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int x;
    int arr[] = {1, 4, 6, 8, 10, 16, 25, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element to search : ";
    cin>> x;
    int result = binarySearch(arr,n,x);
    if(result == -1){
        cout<<"Not found";
    }
    else {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}





