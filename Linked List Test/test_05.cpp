#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


void Print(Node* head)
{
    cout<<"Linked list: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void printRecursive(Node* head)
{
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printRecursive(head->next);
}

void printReverse(Node* head)
{
    if(head == NULL){
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
}

int main()
{
    Node* head = NULL;
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    head = first;
    Print(head);
    cout<<endl;
    cout<<"Linked list (recursive): ";
    printRecursive(head);
    cout<<"Reversed linked list (recursive): ";
    printReverse(head);
    return 0;
}

