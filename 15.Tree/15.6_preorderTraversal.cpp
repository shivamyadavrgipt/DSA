#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=nullptr;
        right=nullptr;
    }
};
    void preorder(Node* root){
        if(root==nullptr){
            return;
        }
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
int main(){
    Node* root=new Node(55);
    root->left=new Node(34);
    root->right=new Node(27);
    root->left->left=new Node(33);
    root->left->right=new Node(21);
    root->right->left=new Node(34);
    preorder(root);
    return 0;
}