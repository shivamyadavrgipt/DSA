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
void PrintOrderLinebyLine(Node* root){
    queue<Node*> q;
    if(root==nullptr){
        return;
    }
    q.push(root);
    q.push(nullptr);
    while(q.size()>1){
        Node* curr=q.front();
        q.pop();
        if(curr==nullptr){
            cout<<endl;
            q.push(nullptr);
            continue;
        }
       
        cout<<curr->val<<" ";
        if(curr->left!=nullptr){
            q.push(curr->left);
        }
        if(curr->right!=nullptr){
            q.push(curr->right);
        }
    }
}
int main(){
    Node* root=new Node(55);
    root->left = new Node(34);
    root->right = new Node(27);
    root->left->left = new Node(33);
    root->left->right = new Node(21);
    root->right->left = new Node(34);
    PrintOrderLinebyLine(root);
    return 0;
}