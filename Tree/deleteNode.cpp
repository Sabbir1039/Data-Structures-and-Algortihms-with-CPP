#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) : data(data), left(nullptr),  right(nullptr) {} 
};

Node* insert(Node* root, int data)
{
    Node* newNode = new Node(data);
    
    if(root == nullptr) {
        root = newNode;
        return root;
    }
    else if(data <= root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

void inOrderTraversal(Node* root)
{
    if(root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

Node* findMaxNode(Node* root)
{
    if(root == nullptr) {
        return root;
    }
    else if(!root->left && !root->right) {
        return root;
    }
    else {
        return findMaxNode(root->right);
    }
}

Node* deleteNode(Node* root, int value)
{
    if(root == nullptr) {
        return root;
    }
    else if(root->data == value) {
        if(!root->left && !root->right) {
            delete root;
            root = nullptr;
            return root;
        }
        else if(root->left && !root->right) {
            Node* temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        else if(!root->left && root->right) {
            Node* temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else {
            Node* leftMax = findMaxNode(root->left);
            root->data = leftMax->data;
            root->left = deleteNode(root->left, leftMax->data);
            return root;
        }
    }
    else if(value < root->data) {
        root->left = deleteNode(root->left, value);
    }
    else {
        root->right = deleteNode(root->right, value);
    }
    return root;
}

int main()
{
    Node* root = nullptr;

    root = insert(root, 30);
	root = insert(root, 21);
	root = insert(root, 39);
	root = insert(root, 13);
	root = insert(root, 25);
	root = insert(root, 34);
	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 38);
	root = insert(root, 38);
	root = insert(root, 38);
	
    inOrderTraversal(root);
    cout<<endl;

    root = deleteNode(root, 38);
    root = deleteNode(root, 40);
    root = deleteNode(root, 50);

    inOrderTraversal(root);
    
    return 0;
}