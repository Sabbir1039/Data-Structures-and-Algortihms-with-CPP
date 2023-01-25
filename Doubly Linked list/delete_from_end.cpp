
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

void DeleteFromEnd()
{
    Node* temp = head;
    Node* temp1;

    while(temp->next!=NULL){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    free(temp);
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
        InsertEnd(data);
        Print();
        cout<<endl;
    }
    int item;
    cout<<"How many node to delete from end: ";
    cin>>item;
    for(int j=0; j<item; j++){
        DeleteFromEnd();
        Print();
        cout<<endl;
    }


    return 0;
}



