#include<iostream>
using namespace std;

void printArray(int **arr, int row, int col)
{
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<arr[i][j]<< " "; 
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int row, col;
    cout<<"Enter size of array (row, col): ";
    cin>>row>>col;

    int **arr2D = new int*[row];

    for(int i=0; i<row; i++) {
        arr2D[i] = new int[col];
    }

    cout<<"Enter array items: ";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>>arr2D[i][j];
        }
    }

    printArray(arr2D, row, col);

    // deallocate memory
    for (int i=0; i<row; i++) {
        delete[] arr2D[i];
    }
    // deallocate memory
    delete[] arr2D;
    return 0;
}