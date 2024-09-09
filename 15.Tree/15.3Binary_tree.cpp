#include<iostream>
using namespace std;
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=nullptr;
        right=nullptr;
    }
};
void display(){
    
}
int main(){
    Node* root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(11);
    return 0;
}