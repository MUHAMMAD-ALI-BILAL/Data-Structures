#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left, *right;
};
class binary_tree
{   
    public:
        node *root;
        node *temp2, *temp3;
        int number;
        node *temp;
        void Insert(node  *temp);
        void options();
};
void binary_tree::Insert(node *temp)
{
    if(root == NULL)
    {
        root = new node;
        root->info = number;
        root->right = NULL;
        root->left = NULL;
        return;
    }
    if(root != NULL)
    {
        if(root->info > number)
        {
            temp->right = new node;
            temp2 = temp->right;
            temp2->right->info = number;
            temp = NULL;
            return;
        }
        else
        {
            temp->left = new node;
            temp->left->info = number;
            return;
        }
    }
    
}

void binary_tree::options()
{
    cout<<"********** Choose Options ***********"<<endl;
    cout<<" 1- Add(Insert) Number"<<endl;
    cout<<" 2- Exit the Program"<<endl;
}

int main()
{
    char ch;
    binary_tree obj;
    while(3)
    {
        obj.options();
        cout<<"Enter Number: ";
        cin>>ch;
        switch (ch)
        {
        case '1':
            cout<<"Enter Number to Add in Tree..."<<endl;
            cin>>obj.number;
            obj.Insert(obj.root);
            break;
        case '2':
            exit(0);
            break;
        
        default:
            break;
        }
    }
    return 0;
}