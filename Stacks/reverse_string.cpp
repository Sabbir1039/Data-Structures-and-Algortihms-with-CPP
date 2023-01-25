#include<iostream>
#include<cstring>
using namespace std;
#define MAX_SIZE 100

class Stack{
public:
    int TOP;
    char A[MAX_SIZE];

    Stack()
    {
        TOP = -1;
    }

    void push(char data)
    {
        TOP++;
        A[TOP] = data;
    }

    void pop()
    {
        A[TOP--];
    }

    bool isEmpty()
    {
        if(TOP<0){
            return true;
        }
        else{
            return false;
        }
    }

    char top()
    {
        return A[TOP];
    }
    void Print()
    {
        for(int i=0; i<=TOP; i++){
            cout<<A[i]<<endl;
        }
    }
};

void reverseStr(char* ch, int n)
{
    Stack s;
    for(int i=0; i<n; i++){
        s.push(ch[i]);
    }
    for(int j=0; j<n; j++){
        ch[j] = s.top();
        s.pop();
    }
}

int main()
{
    char str[100];
    cout<<"String: ";
    gets(str);
    int n = strlen(str);
    reverseStr(str,n);
    cout<<str;
    return 0;
}
