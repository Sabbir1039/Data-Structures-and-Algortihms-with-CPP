#include<iostream>
#include<ctime>
using namespace std;

void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return;
}

void add(int* x)
{
    *x = (*x+1);
}
int main()
{
    int a=10;
    cout<<"a value before add fun = "<<a<<endl;
    add(&a);
    cout<<"a value after add fun = "<<a<<endl;

    unsigned long sec;
    getSeconds(&sec);
    cout<<"Second = "<<sec<<endl;
    
   
    return 0;
}