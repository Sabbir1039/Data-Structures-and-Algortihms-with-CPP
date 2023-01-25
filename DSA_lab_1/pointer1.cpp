#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    int* ptr = &var;
    if(ptr){
        cout<<"True";
    }
    else {
        cout<<"False";
    }
   
    return 0;
}