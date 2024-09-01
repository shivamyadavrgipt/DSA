#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
    };
    void insert_node(Node* &head,int val){
        Node* new_node=new Node(val);
        new_node->next=head;
        head=new_node;
    }
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<' ';
            temp=temp->next;
        }
        cout<<endl;
    }
    void update_kthterm(Node* &head,int new_val,int pos){
        Node* temp=head;
        int count=1;
        while(temp!=nullptr && count<pos){
            temp=temp->next;
            count++;
        }
        if(temp!=nullptr){
            temp->val=new_val;
        }
        else{
            cout<<"it is out of bound"<<endl;

        }
    }
        void delete_alternative(Node* &head){
        Node* current=head;
        Node* temp=current->next;
        if (current==nullptr)
        {
            cout<<"Emply link list";
            return;
        }
        if(current->next!==nullptr || current->next->next!==nullptr){
        temp=current->next;
        current->next=current->next->next;
        delete temp;
            return;
        }
        current=current->next;

        
    }
int main() {
    Node* head=NULL;
    insert_node(head,12);
    display(head);
    insert_node(head,13);
    display(head);
        insert_node(head,14);
    display(head);
        insert_node(head,15);
    display(head);
    update_kthterm(head,0,2);
    display(head);

    delete_alternative(head);
    display(head);
        return 0;
}