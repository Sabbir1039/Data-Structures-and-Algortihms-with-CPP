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
    Node* temp1;
    new_node->data = data;
    new_node->next = NULL;

    if(temp == NULL){
        new_node->prev = NULL;
        head = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    return;
}

int counList()
{
    Node* temp = head;
    int Count = 0;
    while(temp!=NULL){
        Count = Count+1;
        temp = temp->next;
    }
    return Count;
}

void DeleteFromNth(int pos)
{
    Node* temp = head;
    Node* temp1;
    int total_node = counList();
    if(pos>total_node){
        cout<<"Invalid position!";
        return;
    }

    if(pos == 1){
        head = temp->next;
        head->prev = NULL;
        free(temp);
        return;
    }


    if(pos == total_node){
        for(int i=0; i<pos-1; i++){
        temp1 = temp;
        temp = temp->next;
        }
        temp1->next = NULL;
        free(temp);
        return;
    }

    for(int i=0; i<pos-1; i++){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = temp->next;
    temp->next->prev = temp1;
    free(temp);
    return;
}

void Print()
{
    Node* temp = head;
    Node* tail;
    cout<<"Linked list (forward): ";
    while(temp!=NULL){
        tail = temp;
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"Linked list (backward): ";
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    int n,data;
    cout<<"No of node: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter a value: ";
        cin>>data;
        InsertEnd(data);
        Print();
    }
    int m,pos;
    cout<<"No of node to delete: ";
    cin>>m;
    for(int j=0; j<m; j++){
        cout<<"enter a position: ";
        cin>>pos;
        DeleteFromNth(pos);
        Print();
    }
    return 0;
}
