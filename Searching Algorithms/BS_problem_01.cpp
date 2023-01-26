// Problem-01 Finding first occurance(index) of a given element using binary search
#include<iostream>
using namespace std;

int BinarySearchFirst(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(x == arr[mid]){
            result = mid;
            high = mid - 1;
        }
        else if(x < arr[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{
    int arr[] = {1,2,3,44,44, 44, 55, 55, 55, 100, 100, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;

    cout<<"Enter an element to search first index: ";
    cin>>x;
    int result = BinarySearchFirst(arr,n,x);
    if(result == -1){
        cout<<"Not found"<<endl;
    }
    else {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}