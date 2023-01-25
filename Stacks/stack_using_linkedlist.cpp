#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* TOP;
void push(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    if(TOP == NULL){
        new_node->next = NULL;
        TOP = new_node;
        return;
    }
    new_node->next = TOP;
    TOP = new_node;
    return;
}
void pop()
{
    Node* temp = TOP;
    if(temp == NULL){
        cout<<"stack is empty!"<<endl;
        return;
    }
    TOP = temp->next;
    free(temp);
    return;
}
void top()
{
    if(TOP == NULL){
        cout<<"stack is empty!"<<endl;
        return;
    }
    cout<<"Top = "<<TOP->data<<endl;
}
void isEmpty()
{
    if(TOP == NULL){
        cout<<"True"<<endl;
        return;
    }
    else
        cout<<"False"<<endl;
        return;
}
void Print()
{
    cout<<"Stack : "<<endl;
    Node* temp = TOP;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}

int main()
{
    TOP = NULL;
    push(10);
    push(20);
    push(30);
    push(40);
    Print();
    pop();
    Print();
    push(100);
    Print();
    return 0;
}
