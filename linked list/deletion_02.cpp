//Delete an item from end of the list;

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void delete_last(Node** head)
{
    Node* last = *head;
    Node* prev = NULL;
    Node* temp = NULL;

    while(last->next){
        prev = last;
        last = last->next;
    }
    temp = last;
    prev->next = NULL;
    delete temp;
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

    print_list(head);
    cout<<endl;
    delete_last(&head);
    print_list(head);

    return 0;
}
