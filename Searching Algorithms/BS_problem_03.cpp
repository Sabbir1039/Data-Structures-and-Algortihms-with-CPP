// Problem-03 Find count of an element in a sorted array
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int x, bool pos)
{
    int low = 0;
    int high = n-1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(x == arr[mid]){
            result = mid;
            if(pos){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
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

void FindCount(int arr[], int n, int x)
{
    int first = BinarySearch(arr,n,x,true);
    if(first == -1){
        cout<<"Element not found"<<endl;
    }
    else {
        int last = BinarySearch(arr,n,x,false);
        int result = (last - first) + 1;
        cout<<"Count of given element: "<<result<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3,44,44, 44, 55, 55, 55, 100, 100, 100, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;

    cout<<"Enter an element to count: ";
    cin>>x;
    FindCount(arr,n,x);
    return 0;
}