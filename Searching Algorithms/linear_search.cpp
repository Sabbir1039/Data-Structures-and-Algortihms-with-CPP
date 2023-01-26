#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for(int i=0; i<n; i++){
        if(x == arr[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {7,4,2,7,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int result = LinearSearch(arr,n,x);
    if(result == -1){
        cout<<"Not Found";
    }
    else {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}