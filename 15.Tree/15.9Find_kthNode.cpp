//solved
#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    // Constructor to initialize the node with value
    Node(int data){
        val = data;
        left = right = nullptr;
    }
};

// Function to find and print the nodes at level k
void find_kth_root(Node* root, int k){
    // Base case: If the root is null, return
    if(root == nullptr){
        return;
    }
    // If k is 0, print the current node's value
    if(k == 0){
        cout << root->val << " ";
    }
    else {
        // Recursively go deeper into the left and right subtrees, reducing k by 1
        find_kth_root(root->left, k-1);
        find_kth_root(root->right, k-1);
    }
}

int main(){
    // Create the tree
    Node* root = new Node(55);
    root->left = new Node(34);
    root->right = new Node(27);
    root->left->left = new Node(33);
    root->left->right = new Node(21);
    root->right->left = new Node(34);

    // Find and print nodes at level 2
    cout << "Nodes at level 2: ";
    find_kth_root(root, 2);

    // Return 0 to indicate successful execution
    return 0;
}
