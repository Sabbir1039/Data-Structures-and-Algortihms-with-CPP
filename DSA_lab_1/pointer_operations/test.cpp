#include <iostream>
using namespace std;

int main ()
{
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    cout<<&a<<endl;
    cout<<&ptr<<endl;
    cout<<*pptr<<endl;
    cout<<pptr;
  return 0;
}