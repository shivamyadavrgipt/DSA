#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* front;
    public:
    Node(int x){
        val=x;
        prev=nullptr;
        front=nullptr;
    }

};
    void display(Node* &head){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
    }
int  main() {
    Node* head=new Node(2);
    Node* dll1=new Node(3);
    Node* dll2=new Node(4);
    Node* dll3=new Node(5);
    head->prev=dll1;
    dll1->front=head;
    dll2->front=dll1;
    dll1->prev=dll2;
    dll2->front=dll1;
    dll2->prev=dll3;
    dll3->front=dll2;
    display(head);
    return 0;
}