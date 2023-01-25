//Delete first item from linked list;

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void delete_first(Node** head)
{
    if(*head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp;
    temp = *head;
    *head = temp->next;
    delete temp;
    if(*head == NULL){
        cout<<"Last item deleted"<<endl;
    }
    return;
}

void print_list(Node* head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node* head = NULL;

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    head = first;

    cout<<"Before deletion: ";
    print_list(head);

    cout<<endl;
    delete_first(&head);
    cout<<"After deletion: ";
    print_list(head);

    cout<<endl;

    cout<<"Again After deletion: ";
    delete_first(&head);
    print_list(head);

    cout<<endl;

    cout<<"Again After deletion: ";
    delete_first(&head);
    print_list(head);

    cout<<endl;

    cout<<"Again After deletion: ";
    delete_first(&head);
    print_list(head);
    return 0;
}
