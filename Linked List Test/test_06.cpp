#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void append(Node**head ,int data)
{
    Node* new_node = new Node();
    Node* temp = (*head);
    new_node->data = data;
    new_node->next = NULL;
    if(temp == NULL)
    {
        (*head) = new_node;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

Node* reverseList(Node* head)
{
    Node* temp = head;
    if(temp->next == NULL){
        head = temp;
        return head;
    }
    head = reverseList(temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    return he
}

void Print(Node* head)
{
    cout<<"Linked list: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    int m,f;
    cout<<"Enter no of node to append: ";
    cin>>m;
    for(int i=0; i<m; i++){
        cout<<"Enter a value: ";
        cin>>f;
        append(&head,f);
        Print(head);
    }
    head = reverseList(head);
    Print(head);
    return 0;
}

