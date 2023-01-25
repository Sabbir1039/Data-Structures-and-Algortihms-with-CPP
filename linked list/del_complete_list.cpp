#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    Node* next;
}Node;
//push item at start of the list
void push(Node** head, int d)
{
    Node* new_node = new Node();
    new_node->data = d;
    new_node->next = *head;
    *head = new_node;
    return;
}
//append item at end of the list
void append(Node** head, int x)
{
    Node* new_node = new Node();
    Node* temp;
    temp = *head;
    new_node->data = x;

    //if list head is empty;
    if(*head == NULL){
        new_node->next = *head;
        *head = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
    return;
}
//insert item in nth position
void insert_item(Node** head, int pos, int value)
{
    Node* new_node = new Node();
    Node* temp = *head;
    Node* temp1 = NULL;
    Node* temp2 = *head;
    new_node->data = value;

    int total_node = 1;
    while(temp2->next != NULL){
        total_node+=1;
        temp2 = temp2->next;
    }

    if(pos>total_node){
        cout<<"Position is not valid"<<endl;
        return;
    }

    else if(pos == 1){
        new_node->next = *head;
        *head = new_node;
        return;
    }
    int i=1;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    temp1 = temp->next;
    temp->next = new_node;
    new_node->next = temp1;
    return;
}
//delete nth item from list
void delete_item(Node** head, int pos)
{
    Node* temp = *head;

    if(pos == 1){
        *head = temp->next;
        delete(temp);
        return;
    }
    Node* temp1 = *head;
    for(int i=0; i<pos-2; i++){
        temp1 = temp1->next;
    }
    temp = temp1->next;
    temp1->next = temp->next;
    delete(temp);
    return;
}
//print the complete list
void print_list(Node* head)
{
    cout<<"Linked list: ";
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;

    int s, d;
    cout<<"Number of node to enter at the start: ";
    cin>>s;

    for(int i=0; i<s; i++)
    {
        cout<<"Enter a value: ";
        cin>>d;
        push(&head, d);
        print_list(head);
    }


    int n, x;
    cout<<"Number of node to enter at the end: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter a value: ";
        cin>>x;
        append(&head, x);
        print_list(head);
    }
    int pos, value;
    cout<<"Enter the position to insert in list: ";
    cin>>pos;
    cout<<"Enter value to insert: ";
    cin>>value;
    insert_item(&head, pos, value);
    print_list(head);

    int del_pos;
    cout<<"Enter the position of item want to delete: ";
    cin>>del_pos;
    delete_item(&head, del_pos);
    print_list(head);

    return 0;
}

