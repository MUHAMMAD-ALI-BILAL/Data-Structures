#include<iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

class Quee_Final
{
    private:
        Node *front, *rare, *temp;

    public:
        Quee_Final();
        void Enqueue();
        void Dequeue();
        void print();
};

Quee_Final::Quee_Final()
{
    front = rare = NULL;
}

void Quee_Final::Enqueue()
{
    if(rare == NULL)
    {
        rare = new Node;
        cout<<"Enter Number: ";
        cin>>rare->info;
        rare->next = NULL;
        front = rare;
        return;
    }
    else
    {
        temp = new Node;
        cout<<"Enter Number: ";
        cin>>temp->info;
        temp->next = NULL;
        rare->next = temp;
        rare = temp;
        return;
    }   
}

void Quee_Final::Dequeue()
{
    if(front == NULL)
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    if(front->next == NULL)
    {
        front = NULL;
        rare = NULL;
        cout<<"Queue is Now Empty"<<endl;
        return;
    }
    else
    {
        temp = front;
        front = front->next;
        cout<<"Node is Deleted"<<endl;
        delete temp;
        return;
    }
}

void Quee_Final::print()
{
    temp = front;
    while(temp != NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
int main()
{
    Quee_Final obj;
    obj.Enqueue();
    obj.Enqueue();
    obj.print();
    obj.Dequeue();
    obj.print();
    obj.Enqueue();
    obj.print();
    return 0;
}