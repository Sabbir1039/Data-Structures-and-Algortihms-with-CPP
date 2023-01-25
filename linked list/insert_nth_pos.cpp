
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void append_list(Node** head_ref, int x)
{
    Node* new_node = new Node;
    new_node->data = x;
    new_node->next = NULL;

    Node* last = (*head_ref);

    if(last == NULL){
        (*head_ref) = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void insert_after(Node** prev_node, int new_data)
{
    if(*prev_node == NULL){
        return;
    }
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = (*prev_node)->next;
    (*prev_node)->next = new_node;
    return;
}

void print_list(Node* head)
{
    cout<<"Full list: ";
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;

    int n,x;
    cout<<"Enter size: ";
    cin>>n;

    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<"Enter value: ";
        cin>>x;
        append_list(&head, x);
        print_list(head);
    }

    int new_data;
    cout<<"Enter new data: ";
    cin>>new_data;
    cout<<endl;

    insert_after(&head->next, new_data);
    print_list(head);
    return 0;
}
