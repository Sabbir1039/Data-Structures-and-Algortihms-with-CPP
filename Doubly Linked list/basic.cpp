#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* head;

void Print()
{
    Node* temp = head;
    Node* tail;

    cout<<"Linked list (Forward direction): ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        tail = temp;
        temp = temp->next;
    }
    cout<<endl;
    cout<<"Linked list (Backward direction): ";
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }
}

int main()
{
    head = NULL;
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    first->next = second;
    first->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = first;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    head = first;
    Print();

    return 0;
}
