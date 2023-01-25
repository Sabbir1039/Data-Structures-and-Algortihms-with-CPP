#include <iostream>
using namespace std;

int main()
{
    int n,k,item;
    cout<<"Size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the value of array"<<endl;

    for (int i=0; i<n; i++)
    {
        cout<<"arr"<<"["<<i<<"]"<< "= ";
        cin>>arr[i];
    }
    cout<<"Insert the position: "<<endl;
    cin>>k;
    cout<<"Insert the item: "<<endl;
    cin>>item;

    n = n+1;
    int m = n;

    if(k<=m){

        while(m>=k){
        arr[m] = arr[m-1];
        m = m-1;
    }
    arr[k] = item;

    for (int j=0; j<n; j++)
    {
        cout<<arr[j]<<endl;
    }
    }
    else {
        cout<<"Out of bound"<<endl;
    }
    
    return 0;
}
