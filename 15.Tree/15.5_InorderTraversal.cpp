#include<iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(11);
    
    root->left->left = new Node(21); // Adding left child to the left node
    root->left->right = new Node(12); // Adding right child to the left node
    root->left->right->left = new Node(13); // Adding left child to node 12

    inorder(root);
    return 0;
}
