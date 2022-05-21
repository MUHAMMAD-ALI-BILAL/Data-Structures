#include<iostream>
using namespace std;
struct node
{
    int info;
    node *pre;
    node *next;
};
class link
{
    public:
        void add();
        void deletes();
        void print();
        link();
    private:
        node *head,*temp,*temp1;
        int key;
        int val;
}; 
link::link()
{
    head = temp = temp1 = NULL;
}
void link::add()
{
    if(head==NULL)
    {
        head = new node();
        cout<<"Enter the number: ";
        cin>>head->info;
        head->pre = NULL;
        head->next = NULL;
        return;
    }
    cout<<"After which Number you want to enter data: ";
    cin>>key;
    temp = head;
    while(temp != NULL)
    {
        if(temp->info == key)
        {
            temp1 = new node;
            cout<<"Enter value: ";
            cin>>temp1->info;
            temp1->next = temp->next;
            temp->next = temp1;
            temp1->pre = temp;
            if(temp1->next != NULL)
            {
                temp1->next->pre = temp1;
            }
        }
        temp = temp->next;
    }
}
void link::print()
{
    if(head != NULL)
    {
        while (head != NULL)
        {
            temp = head;
            cout<<head->info<<" ";
            head = head->next;
        }
    }
    else{
    cout<<"Data Not Found"<<endl;}
}
int main()
{
    link lin;
    lin.add();
    lin.add();
    lin.add();
    lin.print();
    return 0;
}