#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    Node* head;
public:
    LinkedList()
    {
        head = NULL;
    }
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void LinkedList::insertNode(int data)
{
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void LinkedList::printList()
{
    if(head == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<"Linked List: ";
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void LinkedList::deleteNode(int pos)
{
    Node* temp = head;
    Node* temp2;
    if(temp->next == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    for(int i=0; i<=pos-2; i++){
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
    free(temp);
    return;
}

int main()
{
    LinkedList llist;
    llist.insertNode(10);
    llist.insertNode(100);
    llist.insertNode(1000);
    llist.printList();
    llist.deleteNode(3);
    llist.printList();
    return 0;
}
