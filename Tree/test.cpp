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

Node* Insertion(Node* root, int data)
{
    if(root == NULL){
        root = new Node(data);
    }
    else if(data <= root->data){
        root->left = Insertion(root->left, data);
    }
    else {
        root->right = Insertion(root->right, data);
    }
    return root;
}

void Inorder(Node* root)
{
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node* root)
{
    if(root == NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void Levelorder(Node* root)
{
    if(root == NULL){
        cout<<"Empty"<<endl;
    }
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* curr = Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL) Q.push(curr->left);
        if(curr->right != NULL) Q.push(curr->right);
    }
}

int Height(Node* root)
{
    if(root == NULL) return -1;
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

Node* FindMin(Node* root)
{
    while(root->left != NULL) root = root->left;
    return root;
}

Node* Delete(Node* root, int data)
{
    if(root == NULL) return root;
    else if(data < root->data){
        root->left = Delete(root->left,data);
    }
    else if(data > root->data){
        root->right = Delete(root->right,data);
    }
    else {
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        else if(root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else {
            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}


int main()
{
    Node* root = NULL;
    root = Insertion(root, 50);
    root = Insertion(root, 20);
    root = Insertion(root, 70);
    root = Insertion(root, 15);
    root = Insertion(root, 30);
    cout<<"Inorder traversal = ";
    Inorder(root);
    cout<<"\nPreorder traversal = ";
    Preorder(root);
    cout<<"\nPostorder traversal = ";
    Postorder(root);
    cout<<"\nLevel order traversal = ";
    Levelorder(root);
    cout<<"\nHeight of tree : "<<Height(root)<<endl;
    root = Delete(root,20);
    cout<<"\nLevel order traversal = ";
    Levelorder(root);
    return 0;
}
