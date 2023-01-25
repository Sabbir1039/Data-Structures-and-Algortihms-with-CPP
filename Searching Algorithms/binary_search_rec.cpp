#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int x)
{
   if(end<start){
    return -1;
   }
   int mid = start + (end-start)/2;
   if(arr[mid] == x){
    return mid;
   }
   else if(x<arr[mid]) {
    return binarySearch(arr,start,mid-1,x);
   }
   else {
    return binarySearch(arr,mid+1,end,x);
   }
}

int main()
{
    int arr[] = {2,3,4,5,6,7,12,15,20,25,29,30,44,55,66,77,88,99};
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1;
    int x = 88;
    int result = binarySearch(arr,start,end,x);
    if(result == -1){
        cout<<"Not found";
    }
    else {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}