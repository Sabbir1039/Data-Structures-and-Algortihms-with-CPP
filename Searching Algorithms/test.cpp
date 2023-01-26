#include<iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int x)
{
    if(low>high){
        return -1;
    }
    int mid = low + (high-low)/2;
    if(x == arr[mid]){
        return mid;
    }
    else if(x < arr[mid]){
        return BinarySearch(arr, low, mid-1,x);
    }
    else {
        return BinarySearch(arr, mid+1, high, x);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int low = 0;
    int high = n-1;
    int result = BinarySearch(arr,low,high,x);
    if(result == -1){
        cout<<"Not found"<<endl;
    } 
    else {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}