#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_node_ref, int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = *head_node_ref;
    (*head_node_ref) = temp;
}

void print(Node* head_node)
{
    cout<<"Linked list items: ";
    while(head_node != NULL){
        cout<<head_node->data<<" ";
        head_node = head_node->next;
    }
    cout<<endl;
}

int main()
{
     Node* head = NULL;

    int x,n;
    cout<<"Enter no of item want to insert: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        push(&head, x);
        print(head);
    }
   
    
    return 0;
}