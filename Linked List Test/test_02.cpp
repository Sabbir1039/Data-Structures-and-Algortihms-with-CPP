#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void Push(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

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

void Insert(int pos, int data)
{
    Node* new_node = new Node();
    Node* temp = head;
    Node* temp1;
    new_node->data = data;

    if(pos == 0){
        new_node->next = temp;
        head =new_node;
        return;
    }
    for(int i=0; i<pos-2; i++){
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = new_node;
    new_node->next = temp1;
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

    int n,d;
    cout<<"Enter no of node to push: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter a value: ";
        cin>>d;
        Push(d);
        Print();
    }
    int m,f;
    cout<<"Enter no of node to append: ";
    cin>>m;
    for(int i=0; i<m; i++){
        cout<<"Enter a value: ";
        cin>>f;
        append(f);
        Print();
    }
    int pos,dt,p;
    cout<<"No of node to insert: ";
    cin>>p;
    cout<<endl;
    for(int i=0; i<p; i++){
        cout<<"Enter a position to insert node: ";
        cin>>pos;
        cout<<endl;
        cout<<"Enter value: ";
        cin>>dt;
        Insert(pos,dt);
        Print();
    }


    return 0;
}
