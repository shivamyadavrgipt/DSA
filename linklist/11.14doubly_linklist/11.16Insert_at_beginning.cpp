#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* front;
    Node(int x){
        val=x;
        prev=nullptr;
        front=nullptr;
    }
};
class doublyll{
    public:
    Node* head;
    doublyll(){
        head=nullptr;
    }
    void insertatfront(int x){
        Node* new_node=new Node(x);
        if (head==nullptr)
        {
            head=new_node;
        }   
        else{
            // Node* temp=head;
            new_node->front=head;
            head->prev=new_node;
            head=new_node;
        } 
    }
    void display(){
        Node* temp=head;
        while (temp!=nullptr)
        {
            cout<<temp->val<<" ";
            temp=temp->front;
        }
      cout<<endl;  
    }
};
int main(){
    doublyll dll;
    dll.insertatfront(3);
    dll.insertatfront(4);
    dll.insertatfront(5);
    dll.insertatfront(6);
    dll.display();
    return 0;
}