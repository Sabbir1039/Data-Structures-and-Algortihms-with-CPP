#include<iostream>
using namespace std;

int main()
{
    int n, k, itm;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<"Position: ";
    cin>>k;
    cout<<"Item: ";
    cin>>itm;

    arr[k-1] = itm;

    for(int j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}