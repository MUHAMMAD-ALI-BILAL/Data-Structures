#include<iostream>
using namespace std;

struct  Node
{
    int info;
    Node *next;
};

class Link_List
{
    private:
           Node *head, *temp, *temp1;
    public:
        int key;
        Link_List();
        void add();
        void Delete();
        void print();
};

Link_List::Link_List()
{
    head = temp = temp1 = NULL;
}

void Link_List::add()
{
    if(head == NULL)
    {
        head = new Node;
        cout<<"Enter Info: ";
        cin>>head->info;
        head->next = NULL;
        cout<<"1 _Node is Created"<<endl;
        return;
    }
    else
    {
        temp = head;
        while(temp !=  NULL)
        {
            cout<<temp->info<<" ";
            temp = temp->next;
        }

        cout<<endl;

        cout<<"Enter Number to insert after that Node: ";
        cin>>key;
        temp = head;
        while(temp != NULL)
        {
            if(temp->info == key)
            {
                temp1 = new Node;
                cout<<"Enter Numer to insert: ";
                cin>>temp1->info;
                temp1->next = temp->next;
                temp->next = temp1;
                return;
            }
            temp = temp->next;
        }
    }
}

void Link_List::print()
{
    if(head == NULL)
    {
        cout<<"Link_List is Empty"<<endl;
    }
    else
    {
        temp = head;
            while(temp != NULL)
            {
                cout<<temp->info<<" ";
                temp = temp->next;
            }
            return;
    }
}

int main()
{
    Link_List list;
    list.add();
    list.add();
    list.add();
    list.print();
    return 0;
}
            
        
