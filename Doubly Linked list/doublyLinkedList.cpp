#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_at_start(int value)
    {
        Node* new_node = new Node(value);
        Node* temp = head;
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            new_node->prev = NULL;
            return;
        }
        new_node->next = temp;
        temp->prev = new_node;
        new_node->prev = NULL;
        head = new_node;
        return;
    }

    void insert_at_end(int value)
    {
        Node* new_node = new Node(value);
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            new_node->prev = NULL;
            return;
        }
        Node* temp = tail;
        temp->next = new_node;
        new_node->prev = temp;
        tail = new_node;
        return;
    }

    void delete_node(int pos)
    {
        Node* curr_node = head;
        Node* prev_node = head;
        if(head == NULL)
        {
            cout<<"Empty"<<endl;
        }
        if(pos == 1)
        {
            head = curr_node->next;
            curr_node->next->prev = NULL;
            free(curr_node);
            return;
        }
        for(int i=0; i<pos-1; i++)
        {
            prev_node = curr_node;
            curr_node = curr_node->next;
        }
        Node* temp = curr_node->next;
        prev_node->next = curr_node->next;
        temp->prev = prev_node;
        free(curr_node);
        return;
    }

    void print()
    {
        if(head == NULL)
        {
            cout<<"Empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    void print_reverse()
    {
        Node* temp = tail;
        if(tail == NULL)
        {
            cout<<"Empty";
        }
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->prev;
        }
        cout<<"\n";
    }
};

int main()
{
    DoublyLinkedList llist;
    llist.insert_at_end(1);
    llist.insert_at_end(3);
    llist.insert_at_end(5);
    llist.insert_at_end(7);
    llist.insert_at_end(9);
    llist.print();
    llist.print_reverse();
    llist.delete_node(1);
    llist.print();
    llist.print_reverse();
    llist.delete_node(2);
    llist.print();
    llist.print_reverse();
    return 0;
}
