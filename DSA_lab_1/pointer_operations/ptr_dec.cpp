#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,9};
    int n=6;
    int* ptr;
    ptr = &arr[n-1];

    for(int i=n-1; i>=0; i--)
    {
        cout<<"Adress of arr["<<i<<"]"<<"="<<ptr<<endl;
        cout<<"Value of arr["<<i<<"]"<<"="<<*ptr<<endl;
        ptr--;
    }
   
    // last ptr adress and value
    cout<<ptr<<endl;
    cout<<*ptr;
    return 0;
}