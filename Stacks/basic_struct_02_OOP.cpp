#include<iostream>
using namespace std;
#define MAX_SIZE 101


class Stack{
private:
    int A[MAX_SIZE];
    int TOP;
public:
    Stack()
    {
        TOP = -1;
    }
    void Push(int data)
    {
        if(TOP == MAX_SIZE-1){
            cout<<"Stack is Full"<<endl;
            return;
        }
        TOP++;
        A[TOP] = data;
        return;
    }

    void Pop()
    {
        TOP--;
        return;
    }
    void isEmpty()
    {
        if(TOP == -1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        else
            cout<<"Stack is not Empty"<<endl;
    }
    void Top()
    {
        cout<<"top = "<<A[TOP]<<endl;
    }
    void Print()
    {
        cout<<"Stack: "<<endl;
        for(int i=0; i<=TOP; i++){
            cout<<A[i]<<endl;
        }
    }
};

int main()
{
    Stack s;
    s.Push(1);
    s.Push(3);
    s.Push(5);
    s.Push(7);
    s.Push(9);
    s.Print();
    s.Pop();
    s.Pop();
    s.Print();
    s.Top();

    return 0;
}
