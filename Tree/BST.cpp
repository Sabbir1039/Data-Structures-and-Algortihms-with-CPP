#include<iostream>
using namespace std;

class BSTNode{
public:
    int data;
    BSTNode* left;
    BSTNode* right;
    BSTNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


BSTNode* insertNode(BSTNode* root,int value)
{
    if(root == NULL)
    {
        root = new BSTNode(value);
    }
    else if(value <= root->data)
    {
        root->left = insertNode(root->left, value);
    }
    else
    {
        root->right = insertNode(root->right, value);
    }
    return root;
}

bool Search(BSTNode* root, int key)
{
    if(root == NULL)
    {
        return false;
    }
    else if(key == root->data)
    {
        return true;
    }
    else if(key <= root->data)
    {
        return Search(root->left, key);
    }
    else {
        return Search(root->right, key);
    }
}

int main()
{
    BSTNode* root;
    root = NULL;
    root = insertNode(root,10);
    root = insertNode(root,20);
    root = insertNode(root,30);
    root = insertNode(root,25);
    bool key = Search(root, 40);
    if(key == true){
        cout<<"Found key"<<endl;
    }
    else {
        cout<<"Not found"<<endl;
    }
    return 0;
}
