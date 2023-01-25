#include<iostream>
#include <cstring>
#include<typeinfo>
using namespace std;

int main()
{
    char arr[20] = {'b','a','p','p','y','\0'};
    for(int i=0; i<6; i++)
    {
        cout<<arr[i];
        if(arr[i] == '\0'){
            cout<<" "<<i<<"="<<"Found Null";
        }
    }
    
    return 0;
}