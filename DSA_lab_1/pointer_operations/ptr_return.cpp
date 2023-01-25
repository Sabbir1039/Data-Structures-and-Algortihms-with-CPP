#include<iostream>
using namespace std;

int* add(int* x, int* y)
{
    int* c = (int*)malloc(sizeof(int));
    *c = (*x) + (*y);
    // cout<< &c<<endl;
    return c;
}

int main()
{
    int a = 10;
    int b = -15;
    int* ptr = add(&a, &b);
    cout<<*ptr<<endl;
    return 0;
}