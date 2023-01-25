#include <iostream>
using namespace std;

void print(){
    cout<<"Hello World"<<endl;
}

int add(int a, int b){
    return a+b;
}

int main () {
    
    void(*funPtr)();
    funPtr = print;
    funPtr();

    int(*funAdd)(int,int);
    funAdd = add;
    int total = funAdd(5,6);

    cout<<total<<endl;

   return 0;
}
