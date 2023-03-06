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

Node* Insert(Node* root, int data)
{
    if(root == NULL){
        root = new Node(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else{
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
        Node* current = Q.front();
        Q.pop();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
    }
}

int Height(Node* root)
{
    if(root == NULL){
        return -1;
    }
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    return max(leftHeight,rightHeight)+1;
}

void Min(Node* root)
{
    if(root == NULL) return;
    else if(root->left == NULL) cout<<"Min value = "<<root->data<<endl;
    else Min(root->left);
}

void MinIte(Node* root)
{
    if(root == NULL){
        cout<<"Empty"<<endl;
        return;
    }
    while(root->left != NULL){
        root = root->left;
    }
    cout<<"Min Iterative = "<<root->data<<endl;
    return;
}

int main()
{
    Node* root = NULL;
    root = Insert(root,20);
    root = Insert(root,10);
    root = Insert(root,30);
    root = Insert(root,8);
    root = Insert(root,11);
    LevelOrderTraversal(root);
    cout<<"\nHeight of tree = "<<Height(root)<<endl;
    Min(root);
    MinIte(root);
    return 0;
}
