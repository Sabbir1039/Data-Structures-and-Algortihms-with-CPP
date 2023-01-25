#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* head;

void InsertHead(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    new_node->prev = NULL;

    if(head!=NULL){
        head->prev = new_node;
    }
    head = new_node;
}

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

    int n,data;
    cout<<"enter no of node: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"enter value: ";
        cin>>data;
        InsertHead(data);
        Print();
        cout<<endl;
    }

    return 0;
}

