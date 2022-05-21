#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};
class Array
{
    private:
        node *top, *temp;
    
    public:
        void push();
        void pop();
        void print();
        Array();
};
Array::Array()
{
    top = temp = NULL;
}
void Array::push()
{
    if(top == NULL)
    {
        cout<<"Stack is Empty"<<endl;
        top = new node;
        cout<<"Enter val: ";
        cin>>top->val;
        top->next = NULL;
        return;
    }
        temp = new node;
        temp->next = top;
        cout<<"Enter val: ";
        cin>>temp->val;
        top = temp;
        temp = NULL;
    
}
    void Array::pop()
    {
        if(top == NULL)
        {
            cout<<"Under...Flow"<<endl;
            return;
        }
        else
        {
        temp = top;
        top = top->next;
        delete temp;
        temp = NULL;
        }
    }
    void Array::print()
    {
        if(top == NULL)
        {
            cout<<"Array is Empty"<<endl;
        }
        temp = top;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }

int main()
{
    Array A;
    A.push();
    A.push();
    A.pop();
    A.print();
    return 0;
}