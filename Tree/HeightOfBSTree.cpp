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

BSTNode* Insert(BSTNode* root, int data)
{
    if(root == NULL)
    {
        root = new BSTNode(data);
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

int Search(BSTNode* root,int key)
{
    if(root == NULL){
        return -1;
    }
    else if(key == root->data){
        return 1;
    }
    else if(key <= root->data){
        return Search(root->left,key);
    }
    else{
        return Search(root->right,key);
    }
}

int HeightOfBSTree(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    int leftHeight = HeightOfBSTree(root->left);
    int rightHeight = HeightOfBSTree(root->right);
    return max(leftHeight,rightHeight)+1;
}

int main()
{
    BSTNode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,20);
    root = Insert(root,10);
    root = Insert(root,8);
    root = Insert(root,11);
    root = Insert(root,81);
    int maxHeight = HeightOfBSTree(root);
    cout<<"Height of BS Tree = "<<maxHeight<<endl;
    return 0;
}

