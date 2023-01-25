#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void Print()
{
    cout<<"Linked list: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    head = first;
    Print();
    return 0;
}
