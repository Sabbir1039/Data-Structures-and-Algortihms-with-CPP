#include<iostream>
#include<string>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class Queue{
public:
    Node* Front;
    Node* Rear;

    Queue()
    {
        Front = NULL;
        Rear = NULL;
    }

    void Enqueue(int data)
    {
        Node* node = new Node();
        Node* head = Front;
        node->data = data;
        node->next = NULL;

        if(head == NULL){
            Front = Rear = node;
            return;
        }
        Rear->next = node;
        Rear = node;
        return;
    }

    int Dequeue()
    {
        if(IsEmpty()){
            cout<<"Nothing to dequeue"<<endl;
            return -1;
        }
        Node* temp = Front;
        int x = temp->data;
        Front = temp->next;
        free(temp);
        return x;
    }

    void Print()
    {
        Node* temp = Front;
        cout<<"Queue list: "<<endl;
        while(temp->next != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<"\n";
    }
    void Peek()
    {
        if(Front == NULL){
            cout<<"No element in list";
        }
        cout<<Front->data;
    }
     bool IsEmpty()
    {
        if(Front == NULL){
            return true;
        }
        return false;
    }
};

int main()
{
    Queue Q;

    Q.Dequeue();
    Q.Enqueue(5);
    Q.Enqueue(10);
    Q.Enqueue(15);
    Q.Enqueue(20);
    Q.Enqueue(25);
    Q.Enqueue(30);
    Q.Print();

    Q.Dequeue();
    Q.Dequeue();
    Q.Print();

    Q.Peek();

    return 0;
}
