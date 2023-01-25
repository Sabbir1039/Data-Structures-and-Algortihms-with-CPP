#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void Insert(Node** head, int value)
{
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
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

Node* Reversed(Node* head)
{
    if(head->next == NULL){
        return head;
    }
    Node* rest = Reversed(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

Node* Reverse(Node* head)
{
    Node* p =head;
    if(p->next == NULL){
        head = p;
        return head;
    }
    head = Reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
    return head;
}

int main()
{
    Node* head = NULL;
    Insert(&head, 10);
    Insert(&head, 20);
    Insert(&head, 30);
    Insert(&head, 40);
    Insert(&head, 50);
    cout<<"Linked list: ";
    Print(head);
    cout<<endl;
    head = Reverse(head);
    cout<<"Reversed linked list: ";
    Print(head);
    return 0;
}

