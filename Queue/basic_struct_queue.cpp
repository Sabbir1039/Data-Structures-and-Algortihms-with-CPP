#include<iostream>
#include<string>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];

class Queue{
public:
    int Front;
    int Rear;

    Queue()
    {
        Front = Rear = -1;
    }

    void Enqueue(int x)
    {
        if(IsFull())
        {
            cout<<"List is Full!"<<endl;
            return;
        }
        else if(IsEmpty())
        {
        Front++;
        A[Front] = x;
        Rear = Front;
        return;
        }
        Rear++;
        A[Rear] = x;
        return;
    }

    int Dequeue()
    {
        return A[Front++];
    }

    bool IsEmpty()
    {
        if((Front) == -1 && (Rear == -1))
            return true;
        return false;
    }

    bool IsFull()
    {
        if(Rear == MAX_SIZE-1)
        {
            return true;
        }
        return false;
    }

    int Peek()
    {
        return A[Rear];
    }

    void Display()
    {
        cout<<"Queue List: "<<endl;
        for(int i=Front; i<=Rear; i++){
        cout<<A[i]<<endl;
    }
    }
};



int main()
{
    Queue Q;
    Q.Enqueue(2);
    Q.Enqueue(4);
    Q.Enqueue(6);
    Q.Enqueue(8);
    Q.Enqueue(10);

    Q.Display();

    int peek = Q.Peek();
    cout<<"Peek: "<<peek<<endl;
    cout<<"Is empty? "<<Q.IsEmpty()<<endl;
    cout<<"Is full? "<<Q.IsFull()<<endl;

    int deq = Q.Dequeue();
    cout<<"Dequeue item = "<<deq<<endl;

    Q.Display();
    return 0;
}
