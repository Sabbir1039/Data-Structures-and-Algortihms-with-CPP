#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* InsertNode(Node* root,int data)
{
    if(root == NULL){
        root = new Node(data);
    }
    else if(data <= root->data){
        root->left = InsertNode(root->left,data);
    }
    else {
        root->right = InsertNode(root->right,data);
    }
    return root;
}

Node* InsertWrongTree(Node* root, int data)
{
    if(root == NULL){
        root = new Node(data);
    }
    else if(data > root->data){
        root->left = InsertWrongTree(root->left,data);
    }
    else {
        root->right = InsertWrongTree(root->right, data);
    }
    return root;
}

void InOrderTraversal(Node* root)
{
    if(root == NULL){
        return;
    }
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}
bool IsSubTreeLesser(Node* root, int data)
{
    if(root == NULL){
        return true;
    }
    else if(root->data <= data){
        return true;
    }
    else{
        return false;
    }
}

bool IsSubTreeGreater(Node* root, int data)
{
    if(root == NULL) return true;
    else if(root->data > data) return true;
    else
        return false;
}

bool IsBinarySearchTree(Node* root)
{
    if(root == NULL){
        return true;
    }
    if(IsSubTreeLesser(root->left, root->data) && IsSubTreeGreater(root->right, root->data) &&
            IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)){
                return true;
            }
    else {
        return false;
    }
}

int main()
{
    Node* root = NULL;
    root = InsertNode(root,20);
    root = InsertNode(root,10);
    root = InsertNode(root,30);
    InOrderTraversal(root);
    bool res = IsBinarySearchTree(root);
    cout<<"\n"<<res<<endl;

    Node* root2 = NULL;
    root2 = InsertWrongTree(root2, 40);
    root2 = InsertWrongTree(root2, 20);
    root2 = InsertWrongTree(root2, 30);
    root2 = InsertWrongTree(root2, 10);
    root2 = InsertWrongTree(root2, 25);
    InOrderTraversal(root2);
    bool res2 = IsBinarySearchTree(root2);
    cout<<"\n"<<res2<<endl;
    return 0;
}
