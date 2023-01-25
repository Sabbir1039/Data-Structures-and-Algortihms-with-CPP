#include <iostream>
using namespace std;

void fun1()
{
    cout<<"Func1 running"<<endl;
}

void fun2(int var, void(*funPtr)())
{
    cout<<"Func2 starts here with variable: "<<var<<endl;
    funPtr();
}
int main () {
    
    cout<<"Main func starts here : "<<endl;
    fun2(10, fun1);
    cout<<"Main function ends here"<<endl;
    
   return 0;
}
