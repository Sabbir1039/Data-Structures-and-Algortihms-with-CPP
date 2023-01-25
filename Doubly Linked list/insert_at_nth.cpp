
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* head;

void InsertEnd(int data)
{
    Node* new_node = new Node();
    Node* temp = head;

    new_node->data = data;
    new_node->next = NULL;

    if(temp == NULL){
        head = new_node;
        new_node->prev = NULL;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    return;
}

void InsertNth(int pos,int data)
{
    Node* new_node = new Node();
    Node* temp = head;
    Node* temp1;

    new_node->data = data;

    if(pos == 1){
        new_node->next = temp;
        new_node->prev = NULL;
        temp->prev = new_node;
        head = new_node;
        return;
    }
    for(int i=0; i<pos-2; i++){
        temp = temp->next;
        temp1 = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = temp1;
    temp1->prev = new_node;
    return;
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

    int m,dt;
    cout<<"enter no of node to append: ";
    cin>>m;
    for(int i=0; i<m; i++){
        cout<<"enter value: ";
        cin>>dt;
        InsertEnd(dt);
        Print();
        cout<<endl;
    }

    int n,data,pos;
    cout<<"enter no of node: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"enter position: ";
        cin>>pos;
        cout<<"enter value: ";
        cin>>data;
        InsertNth(pos,data);
        Print();
        cout<<endl;
    }

    return 0;
}


