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

void reverseList(Node** head)
{
    Node* present = (*head);
    Node* next = (*head);
    Node* prev = NULL;
    while(present != NULL){
        next = present->next;
        present->next = prev;
        prev = present;
        present = next;
    }
    (*head) = prev;
    return;
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
    reverseList(&head);
    Print(head);
    return 0;
}

