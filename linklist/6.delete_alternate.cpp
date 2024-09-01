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
    void insert_at_tail(int val){
        Node* new_node=new Node(val);
        if(head==nullptr){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new_node;
        cout<<endl;
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<' ';
            temp=temp->next;
        }
        cout<<endl;
    }
    
};
    void delete_alternative_nodes(Node* &head){
        Node* current=head;
        while(current!=nullptr && current->next!=nullptr){
            Node* temp=current->next;//which we want too delete
            current->next=current->next->next;
            delete temp;
            current=current->next;
        }
    };
int main() {
    linklist ll;
    ll.insert_at_tail(1);
    ll.insert_at_tail(2);
    ll.insert_at_tail(3);
     ll.insert_at_tail(4);
    ll.insert_at_tail(5);
    ll.insert_at_tail(6);
    ll.display();  // Display the linked list
    delete_alternative_nodes(ll.head);
    ll.display();
    return 0;
}
