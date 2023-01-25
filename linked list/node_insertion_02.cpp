//Linked list

//Insert node at the start of the linked list


#include<iostream>
#include<conio.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void insert_start(Node** head, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
}

void print_list(Node *head)
{
    cout<<"Inserted list: ";
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
    cout<<"No of item to insert: ";
    cin>>n;

    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<"Enter value to insert: ";
        cin>>x;

        insert_start(&head, x);
        print_list(head);
    }
    return 0;
}
