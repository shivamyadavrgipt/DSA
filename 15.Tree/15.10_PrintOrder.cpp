#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=right=nullptr;
    }
};
void PrintOrder(Node* root){
    if(root==nullptr){
        cout<<"khatam hogya bhaiya"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        cout<<curr->val<<" ";
        if(curr->left!=nullptr){
        q.push(curr->left);
        }
        if(curr->right!=nullptr){
        q.push(curr->right);
    }
        q.pop();
    }
}
int main(){
    Node* root=new Node(55);
    root->left = new Node(34);
    root->right = new Node(27);
    root->left->left = new Node(33);
    root->left->right = new Node(21);
    root->right->left = new Node(34);
    PrintOrder(root);
    return 0;
}