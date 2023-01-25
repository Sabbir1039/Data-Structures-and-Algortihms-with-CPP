#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void append(int data)
{
    Node* new_node = new Node();
    Node* temp = head;
    new_node->data = data;
    new_node->next = NULL;
    if(temp == NULL)
    {
        head = new_node;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

void deleteFromStart()
{
    Node* temp = head;
    if(temp == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    head = head->next;
    free(temp);
    return;
}

void deleteFromEnd()
{
    Node* temp = head;
    Node* temp1;
    if(temp == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    while(temp->next!=NULL){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    free(temp);
    return;
}

void deleteNthNode(int pos)
{
    Node* temp = head;
    Node* temp1;
    if(pos == 1){
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=0; i<pos-1; i++){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = temp->next;
    free(temp);
    return;
}

void Print()
{
    Node* temp = head;
    cout<<"Linked list: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    int m,f;
    cout<<"Enter no of node to append: ";
    cin>>m;
    for(int i=0; i<m; i++){
        cout<<"Enter a value: ";
        cin>>f;
        append(f);
        Print();
    }
    int no;
    cout<<"How many item to delete from start? ";
    cin>>no;
    for(int j=0; j<no; j++){
        deleteFromStart();
        cout<<"After deleting node "<<j+1<<": "<<endl;
        Print();
    }
    int mo;
    cout<<"How many item to delete from end? ";
    cin>>mo;
    for(int j=0; j<mo; j++){
        deleteFromEnd();
        cout<<"After deleting node "<<j+1<<": "<<endl;
        Print();
    }
    int pos;
    cout<<"Position to delete node from list: ";
    cin>>pos;
    deleteNthNode(pos);
    Print();
    return 0;
}
