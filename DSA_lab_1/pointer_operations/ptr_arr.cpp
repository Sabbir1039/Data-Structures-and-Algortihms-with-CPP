#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ptr[n];
    for(int i=0; i<n; i++){
        ptr[i] = &arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<"adress = "<<ptr[i]<<endl;
        cout<<"value = "<<*ptr[i]<<endl;
    }
    return 0;
}