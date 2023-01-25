#include<iostream>
#include<stack>
using namespace std;

class Node{
public:
    char data;
    Node* next;
};

void Push(Node** head, char* c)
{
    Node* temphead = *head;
    Node* node = new Node();
    node->data = *c;
    node->next = NULL;

    if(temphead == NULL){
        *head = node;
        return;
    }
    while(temphead->next != NULL){
        temphead = temphead->next;
    }
    temphead->next = node;
    return;
}

void Print(Node** head)
{
    cout<<"List: ";
    Node* temp = *head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}

void Reverse(Node** head)
{
    Node* temp = *head;
    stack<Node*> s;
    if(temp == NULL){
        return;
    }
    while(temp!=NULL){
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top();
    *head = temp;
    s.pop();

    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}


int main()
{
    Node* head = NULL;
    Push(&head, "s");
    Push(&head, "a");
    Push(&head, "b");
    Push(&head, "b");
    Push(&head, "i");
    Push(&head, "r");
    Print(&head);
    Reverse(&head);
    Print(&head);
    return 0;
}
