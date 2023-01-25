#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

void print_list(Node* node)
{
    cout<<"Linked list: ";
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    print_list(head);

    return 0;
}
