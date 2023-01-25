#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter item for search: ";
    cin>>k;

    for(int j=0; j<n; j++)
    {
        if(arr[j] == k)
        {
            cout<<"Found at: "<<j;
            break;  
        }
        if(j == n-1)
        {
            cout<<"not found";
        }
    }
    
    return 0;
}