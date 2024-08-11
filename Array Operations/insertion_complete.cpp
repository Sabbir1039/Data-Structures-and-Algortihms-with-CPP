
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void insert_start(Node** head, int data)
{
    Node* new_node = new Node();
    Node* temp = new Node();
    temp = (*head);
    new_node->data = data;
    new_node->next = temp;
    (*head) = new_node;
}

void insert_end(Node** head, int data)
{
    Node* new_node = new Node();
    Node* temp = (*head);
    new_node->data = data;
    new_node->next = NULL;

    if((*head) == NULL){
        (*head) = new_node;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_nth_pos(Node** head, int position, int data)
{
    Node* new_node = new Node();
    Node* temp = (*head);
    Node* temp1;
    new_node->data = data;

    if((*head) == NULL){
        (*head) = new_node;
        new_node->next = NULL;
        return;
    }
    int i=1;
    while(i<position-1){
        //cout<<temp->data<<" ";
        temp = temp->next;
        i++;
    }

    temp1 = temp->next;
    temp->next = new_node;
    new_node->next = temp1;
}

void print_list(Node* head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;

    int n, data;
    cout<<"Number of node to insert at the start of the list: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter data item: ";
        cin>>data;
        insert_start(&head, data);
        print_list(head);
    }

    int x, dta;
    cout<<"Number of node to insert at the end of list: ";
    cin>>x;
    for(int i=0; i<x; i++){
        cout<<"Enter data item: ";
        cin>>dta;
        insert_end(&head, dta);
        print_list(head);
    }

    int pos,value;
    cout<<"Enter the position to insert data in the list: ";
    cin>>pos;
    cout<<endl;
    cout<<"Enter a value to insert: ";
    cin>>value;
    insert_nth_pos(&head, pos, value);

    print_list(head);

    return 0;
}
