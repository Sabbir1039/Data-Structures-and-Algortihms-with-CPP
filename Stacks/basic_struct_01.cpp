#include<iostream>
using namespace std;

#define MAX_SIZE 100
int A[MAX_SIZE];
int TOP = -1;

void push(int data)
{
    if(TOP == MAX_SIZE-1){
        cout<<"stack is full"<<endl;
        return;
    }
    TOP++;
    A[TOP] = data;
    return;
}

void pop()
{
    TOP--;
    return;
}

void top()
{
    cout<<A[TOP]<<endl;
}

void Print()
{
    cout<<"Stack: "<<endl;
    for(int i=0; i<=TOP; i++){
        cout<<A[i]<<endl;
    }
}

void isEmpty()
{
    if(TOP == -1){
        cout<<"stack is empty!"<<endl;
    }
    else
        cout<<"stack is not empty!"<<endl;
}

int main()
{
    isEmpty();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    Print();
    pop();
    pop();
    Print();
    isEmpty();
    top();
    return 0;
}
