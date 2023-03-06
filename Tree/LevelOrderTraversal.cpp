#include<iostream>
#include<queue>
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

BSTNode* Insert(BSTNode* root,int data)
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


int Min(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    else if(root->left == NULL){
        return root->data;
    }
    else {
        return Min(root->left);
    }
}

int Max(BSTNode* root)
{
    if(root == NULL){
        return -1;
    }
    else if(root->right == NULL){
        return root->data;
    }
    else{
        return Max(root->right);
    }
}

int Height(BSTNode* root)
{
    if(root == NULL)
    {
        return -1;
    }
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    return max(leftHeight,rightHeight)+1;
}

void LevelOrderTravsersal(BSTNode* root)
{
    if(root == NULL){
        return;
    }
    queue<BSTNode*> Q;
    Q.push(root);
    while(!Q.empty()){
        BSTNode* current = Q.front();
        Q.pop();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
    }
}

int main()
{
    BSTNode* root = NULL;
    root = Insert(root,20);
    root = Insert(root,10);
    root = Insert(root,30);
    root = Insert(root,6);
    root = Insert(root,7);
    root = Insert(root,25);
    int height = Height(root);
    cout<<"Height of tree : "<<height<<endl;
    cout<<"Min = "<<Min(root)<<endl;
    cout<<"Max = "<<Max(root)<<endl;
    LevelOrderTravsersal(root);
    return 0;
}
