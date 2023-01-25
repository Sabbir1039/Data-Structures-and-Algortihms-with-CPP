#include<iostream>
using namespace std;

int main()
{
    int n;
    int temp=0;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"sorted array: ";
    for(int k=0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}