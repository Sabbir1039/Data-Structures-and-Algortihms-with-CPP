#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void append(Node** head, int x)
{
    Node* new_node = new Node();
    Node* temp = *head;
    new_node->data = x;
    new_node->next = NULL;
    if(*head == NULL){
        *head = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}


void print_recursive(Node* head)
{
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    print_recursive(head->next);
    cout<<endl;
}
void reverse_print(Node* head)
{
    if(head == NULL){
        return;
    }
    reverse_print(head->next);
    cout<<head->data<<" ";
}

int main()
{
    Node* head = NULL;

    int n, x;
    cout<<"Number of item to append: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter a value: ";
        cin>>x;
        append(&head,x);
        cout<<"Linked List: ";
        print_recursive(head);
    }
    cout<<"Reversed list: ";
    reverse_print(head);
    return 0;
}
