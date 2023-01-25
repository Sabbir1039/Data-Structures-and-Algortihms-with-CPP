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

void reverse_list(Node** head)
{
    Node *prev, *current, *Next;
    current = *head;
    prev = NULL;

    while(current != NULL){
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    *head = prev;
}

void print(Node* head)
{
    cout<<"Linked List: ";
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
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
        print(head);
    }
    reverse_list(&head);
    print(head);
    return 0;
}
