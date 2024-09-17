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

int heightOfBST(Node* root)
{
    if(root == nullptr) {
        return -1;
    }
    int leftHeight = heightOfBST(root->left);
    int rightHeight = heightOfBST(root->right);

    return max(leftHeight, rightHeight) + 1;
}

bool isBSTBalanced(Node* root)
{
    if(root == nullptr) {
        return true;
    }
    int leftHeight = heightOfBST(root->left);
    int rightHeight = heightOfBST(root->right);

    if(abs(leftHeight-rightHeight) > 1) {
        return false;
    }
    return true;
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
	

    // inOrderTraversal(root);

    cout<<"Is BST balanced?  "<<isBSTBalanced(root)<<endl;
    cout<<"height: "<<heightOfBST(root)<<endl;
    return 0;
}