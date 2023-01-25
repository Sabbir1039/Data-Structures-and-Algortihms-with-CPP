#include<iostream>
using namespace std;

int Partition(int* A, int Start, int End)
{
    int pivot = A[End];
    int pIndex = Start;

    for(int i=Start; i<=End-1; i++)
    {
        if(A[i]<=pivot){
            swap(A[i], A[pIndex]);
            pIndex = pIndex+1;
        }
    }
    swap(A[End], A[pIndex]);
    return pIndex;
}

void QuickSort(int* A, int Start, int End)
{
    if(Start<End)
    {
        int pIndex = Partition(A, Start, End);
        QuickSort(A, Start, pIndex-1);
        QuickSort(A, pIndex+1, End);
    }
    return;
}
//Print Array
PrintArray(int* A, int Size)
{
    cout<<"Array : ";
    for(int i=0; i<Size; i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int A[7] = {5,3,1,6,2,7,4};
    int Start = 0;
    int End = 6;

    cout<<"Before sort: "<<endl;
    PrintArray(A,sizeof(A)/sizeof(int));

    QuickSort(A,Start,End);

    cout<<"After sort: "<<endl;
    PrintArray(A,sizeof(A)/sizeof(int));
    return 0;
}
