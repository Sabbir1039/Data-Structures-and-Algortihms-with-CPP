#include <iostream>
using namespace std;

void printHello()
{
    cout<<"Hello World"<<endl;
}

void doubleFun(int* ptr_arr, int n)
{
    for(int i=0; i<n; i++)
    {
        ptr_arr[i] = ptr_arr[i] * 2;
    }
}

/* main function to call above defined function */
int main () {
    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    doubleFun(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   return 0;
}
