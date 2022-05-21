#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *right, *left;
};
class Binary_Searh_Tree
{
    private:
        Node *temp;
    public:
        Node *root;
        int number;
        void Insertion(Node *temp);
        void preorder(Node *temp);
        void inorder(Node *temp);
        void postorder(Node *temp);
        Binary_Searh_Tree();
};
Binary_Searh_Tree::Binary_Searh_Tree()
{
    temp = root = NULL;
}
void Binary_Searh_Tree::Insertion(Node *temp)
{
    if(root == NULL)
    {
        temp = new Node;
        // cout<<"Enter number: ";
        // cin>>number;
        temp->info = number;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
        return;
    }

    if(temp->info == number)
    {
        cout<<"\nNumber is Already Present in Tree\n"<<endl;
        return;
    }

    if(temp->info > number)
    {
        if(temp->left != NULL)
        {
            Insertion(temp->left);
            return;
        }
        else
        {
            temp->left = new Node;
            // cout<<"Enter number: ";
            // cin>>number;
            temp->left->info = number;
            temp->left->right = NULL;
            temp->left->left = NULL;
            return;
        }
    }

    if(temp->info < number)
    {
        if(temp->right != NULL)
        {
            Insertion(temp->right);
            return;
        }
        temp->right = new Node;
        // cout<<"Enter Numer";
        // cin>>number;
        temp->right->info = number;
        temp->right->right = NULL;
        temp->right->left = NULL;
        return;
    }
}

void Binary_Searh_Tree::preorder(Node *temp)
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (temp != NULL)
   {
      cout<<temp->info<<" ";
      preorder(temp->left);
      preorder(temp->right);
   }
}
void Binary_Searh_Tree::postorder(Node *temp)
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (temp != NULL)
   {
      postorder(temp->left);
      postorder(temp->right);
      cout<<temp->info<<" ";
   }
}
void Binary_Searh_Tree::inorder(Node *temp)
{
   if (root == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (temp != NULL)
   {
      inorder(temp->left);
      cout<<temp->info<<" ";
      inorder(temp->right);
   }
}

int main()
{
    Binary_Searh_Tree BST;
    cout<<"Enter Number: ";
    cin>>BST.number;
    BST.Insertion(BST.root);
    cin>>BST.number;
    BST.Insertion(BST.root);
    cin>>BST.number;
    BST.Insertion(BST.root);
    cin>>BST.number;
    BST.Insertion(BST.root);
    BST.preorder(BST.root);
    cout<<"\n";
    BST.postorder(BST.root);
    cout<<"\n";
    BST.inorder(BST.root);
    cout<<"\n";
    return 0;
}