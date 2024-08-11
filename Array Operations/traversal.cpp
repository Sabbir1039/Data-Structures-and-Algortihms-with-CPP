#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 7, 0, 2, 5, 6, 9, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    // array traversal using range-based for loop [array, vector, other containers]
    for(auto item: arr)
    {
        cout<<item<<" ";
    }

    cout<<"\n";

    // traversal using traditional for loop
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    //traversal using while loop
    int count = 0;
    while(count < size)
    {
        cout<<arr[count]<<" ";
        count++;
    }
    return 0;
}