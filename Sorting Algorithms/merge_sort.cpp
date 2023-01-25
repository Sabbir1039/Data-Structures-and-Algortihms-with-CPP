#include<iostream>
#include<string>
using namespace std;

void PrintArray(int* arr, int n)
{
    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void Merge(int* left, int* right, int* arr, int nL, int nR)
{
    int i = 0;
    int j = 0;
    int k = 0;

    // cout<<"Left arr: "<<endl;
    // PrintArray(left, nL);
    // cout<<"Right arr: "<<endl;
    // PrintArray(right, nR);


    while(i<nL && j<nR){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nL){
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<nR){
        arr[k] = right[j];
        k++;
        j++;
    }

}

void MergeSort(int arr[], int n)
{
    if(n<2){
        return;
    }
    int mid;
    mid = n/2;
    int rest = n-mid;
    int left[mid];
    int right[rest];

    for(int i=0; i<mid; i++){
        left[i] = arr[i];
    }

    int k=0;
    for(int j=mid; j<n; j++){
        right[k] = arr[j];
        k++;
    }
    // cout<<"Array left: "<<endl;
    // PrintArray(left, mid);
    // cout<<"Array right: "<<endl;
    // PrintArray(right, rest);


    MergeSort(left, mid);
    MergeSort(right, rest);
    Merge(left,right,arr, mid, rest);
}


int main()
{
    int A[7] = {3,2,4,1,6,5,9};
    PrintArray(A,7);
    MergeSort(A,7);
    PrintArray(A,7);
    return 0;
}