#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

void Insert(int n)
{
    Node* new_node = new Node();
    Node* temp = head;
    new_node->data = n;
    new_node->next = NULL;

    if(head == NULL){
        head = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

void Print(Node* head)
{
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    Print(head->next);
}

void Reversed(Node* p)
{
    if(p->next == NULL){
        head = p;
        return;
    }
    Reversed(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main()
{
    Insert(5);
    Insert(10);
    Insert(15);
    Insert(20);
    Insert(25);
    cout<<"Linked list: ";
    Print(head);
    cout<<endl;
    Reversed(head);
    cout<<"Reversed linked list: ";
    Print(head);
    return 0;
}
