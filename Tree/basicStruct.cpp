#include<iostream>
using namespace std;

class BSTNode {
public:
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

BSTNode* Insert(BSTNode* root,int data)
{
    if(root == NULL){
        root = new BSTNode(data);
    }
    else if(data <= root->data){
            root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

bool Search(BSTNode* root,int val)
{
    if(root == NULL){
        return false;
    }
    else if (root->data == val){
        return true;
    }
    else if (val <= root->data){
        return Search(root->left, val);
    }
    else{
        return Search(root->right, val);
    }
}

int main()
{
    BSTNode* root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 9);
    root = Insert(root, 7);
    root = Insert(root, 8);
    root = Insert(root, 11);

    if(Search(root,11)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}
