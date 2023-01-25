#include <iostream>
using namespace std;

int add(int x, int y)
{
    return (x+y);
}

int subtraction(int x, int y)
{
    return (x-y);
}

int operation(int a, int b, int(*funOperation)(int,int))
{
    int g;
    g = funOperation(a,b);
    return g;
}

int main ()
{
    int a,b;
    cout<<"Enter two value: ";
    cin>>a>>b;

    int sum = operation(a,b, add);
    int sub = operation(a,b, subtraction);

    cout<<"Sum of two number: "<<sum<<endl;
    cout<<"Subtracton of two number: "<<sub<<endl;
  return 0;
}