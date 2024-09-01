#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=nullptr;
    }
};
class linklist{
    public:
    Node* head;
    linklist(){
        head=nullptr;
    }
    void insert_at_tail(int data){
        Node* new_node=new Node(data);
        if(head==nullptr){
            head=new_node;
            return ;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        if(head==nullptr){
            cout<<"EMPTY LIST"<<endl;
        }
        Node* temp=head;
        while (temp!=nullptr)
        {
            cout<<temp->val<<' ';
            temp=temp->next;
        }
        
        cout<< endl;
    }
    //first move the element to stack then access them 
void reverse_linklist(){
    Node* previous=nullptr;
    Node* c
        next_to_c=next_to_c->next;
        

    }

};
int main(){
    linklist ll;
    ll.insert_at_tail(1);
    ll.insert_at_tail(2);
    ll.insert_at_tail(3);
    ll.insert_at_tail(4);
    ll.insert_at_tail(5);
    ll.display();
    return 0;
}