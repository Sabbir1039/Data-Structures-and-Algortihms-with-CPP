#include<iostream>
using namespace std;

int main()
{
    int p = 10;
    int *q = &p;
    int **r = &q;

    cout<<&p<<endl;
    cout<<&q<<endl;
    cout<<*r<<endl;

    **r = 20;

    cout<<p;
    
    return 0;
}