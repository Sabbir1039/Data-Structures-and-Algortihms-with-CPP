//Linked List
//Insert node at the end of the linked list

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void append_node(Node** head, int data)
{
    Node* temp1 = new Node();
    Node* temp = new Node();
    temp1->data = data;
    temp1->next = NULL;


    temp = (*head);

    if(*head == NULL){
        (*head) = temp1;
        return;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = temp1;
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

    int n,x;
    cout<<"Enter no of node to insert: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter a integer value: ";
        cin>>x;
        append_node(&head, x);
        print_list(head);
        cout<<endl;
    }
    return 0;
}
