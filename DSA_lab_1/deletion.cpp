#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,1,3,7,2};
    int p = 0;
    int n = 5;

    int temp = p;

    if(p == n-1)
    {
        for (int i=0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else{
         if(temp<n)
    {
        while(temp<n-1)
        {
            arr[temp] = arr[temp+1];
            temp+=1;
        }
        for(int j=0; j<n-1; j++)
        {
            cout<<arr[j]<<" ";
        }
    }
        else
        {
            cout<<"out of bound";
        }
    }

    return 0;
}