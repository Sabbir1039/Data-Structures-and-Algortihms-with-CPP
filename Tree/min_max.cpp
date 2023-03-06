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

int MinIterative(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}

int MinRecursive(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    else if(root->left == NULL){
        return root->data;
    }
    else{
        return MinRecursive(root->left);
    }
}

int MaxRecursive(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    else if(root->right == NULL){
        return root->data;
    }
    else{
        return MaxRecursive(root->right);
    }
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
    /*int k = Search(root,18);
    if(k == 1){
        cout<<"Found it"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }*/
    int minValue = MinRecursive(root);
    if(minValue == -1){
        cout<<"Tree is empty"<<endl;
    }
    else {
        cout<<"Min value = "<<minValue<<endl;
    }

    int maxValue = MaxRecursive(root);
    if(maxValue == -1){
        cout<<"Tree is empty"<<endl;
    }
    else{
        cout<<"Max value = "<<maxValue<<endl;
    }
    return 0;
}
