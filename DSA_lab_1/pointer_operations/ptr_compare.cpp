#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,9};
    int n=6;
    int* ptr;
    ptr = arr;
    int i = 0;
    while(ptr<&arr[n]){
        cout<<"Adress of arr["<<i<<"] = "<<ptr<<endl;
        cout<<"Value of arr["<<i<<"] = "<<*ptr<<endl;
        ptr++;
        i++;
    }

    
   
    // last ptr adress and value
    cout<<ptr<<endl;
    cout<<*ptr;
    return 0;
}