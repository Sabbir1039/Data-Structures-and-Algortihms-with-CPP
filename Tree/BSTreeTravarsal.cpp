#include<iostream>
#include<queue>
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

Node* Insert(Node* root,int data)
{
    if(root == NULL){
        root = new Node(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

void LevelOrderTraversal(Node* root)
{
    if(root == NULL){
        cout<<"Empty"<<endl;
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL) Q.push(curr->left);
        if(curr->right != NULL) Q.push(curr->right);
    }
}

void PreOrderTraversal(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node* root)
{
    if(root == NULL) return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root)
{
    if(root == NULL){
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root = NULL;
    root = Insert(root,20);
    root = Insert(root,10);
    root = Insert(root,30);
    root = Insert(root,25);
    root = Insert(root,8);
    cout<<"Level Order Traversal : ";
    LevelOrderTraversal(root);
    cout<<"\n";
    cout<<"Pre Order Traversal : ";
    PreOrderTraversal(root);
    cout<<"\n";
    cout<<"In Order Traversal : ";
    InOrderTraversal(root);
    cout<<"\n";
    cout<<"Post Order Traversal : ";
    PostOrderTraversal(root);
    return 0;
}
