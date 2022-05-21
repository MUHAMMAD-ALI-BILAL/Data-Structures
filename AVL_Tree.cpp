#include<iostream>
using namespace std;
struct AVL_Tree_Finals
{   
    int data;
    AVL_Tree_Finals *right;
    AVL_Tree_Finals *left;
};
class AVL
{
    public:
    int number;
    void insertion(AVL_Tree_Finals *temp);
    int height(AVL_Tree_Finals *temp);
    AVL_Tree_Finals *root, *temp;
    AVL();
};

AVL::AVL()
{
    root = temp = NULL;
}

void AVL::insertion(AVL_Tree_Finals *temp)
{
    if(root == NULL)
    {
        root = new AVL_Tree_Finals;
        root->left = NULL;
        root->right = NULL;
        root->data = number;
        temp = root;
        return;
    }
    if(temp->data == number)
    {
        cout<<"Number is Duplicate"<<endl;
        return;
    }
    if(temp->data > number)
    {
        if(temp->left!= NULL)
        {
            insertion(temp->left);
        }

        else
        {
            AVL_Tree_Finals *temp2 = new AVL_Tree_Finals;
            temp2->left = NULL;
            temp2->right = NULL;
            temp2->data = number;
            temp->left = temp2;
            return;
        } 
    }
    if(temp->data < number)
    {
        if(temp->right != NULL)
        {
            insertion(temp->right);
        }
        else
        {
            AVL_Tree_Finals *temp2 = new AVL_Tree_Finals;
            temp2->right = NULL;
            temp2->left = NULL;
            temp2->data = number;
            temp->right = temp2;
            return;
        }
    }
}

int AVL::height(AVL_Tree_Finals *temp)
{
    int left, right;
    temp = root;
    if(temp == NULL)
    {
        cout<<"Tree Not Found"<<endl;
        return 0;
    }
    if(temp->left != NULL)
    {
        left++; 
        height(temp->left);
        return 0;
    }
    if(temp->right != NULL)
    {
        right++;
        height(temp->right);
        return 0;
    }
    cout<<"Left "<<left<<"\nright "<<right<<endl;
}

int main()
{
    AVL obj;
    obj.number = 8;
    obj.insertion(obj.root);
    obj.number = 9;
    obj.insertion(obj.root);
    obj.number=1;
    obj.insertion(obj.root);
    obj.height(obj.root);
    return 0;
}
