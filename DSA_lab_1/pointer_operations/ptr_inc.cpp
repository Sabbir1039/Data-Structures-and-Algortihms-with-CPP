#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n=5;
    int* ptr;
    ptr = arr;

    for(int i=0; i<n; i++)
    {
        cout<<"Adress of arr["<<i<<"]"<<"="<<ptr<<endl;
        cout<<"Value of arr["<<i<<"]"<<"="<<*ptr<<endl;
        ptr++;
    }
    // last ptr adress and value
    cout<<ptr<<endl;
    cout<<*ptr;
    return 0;
}