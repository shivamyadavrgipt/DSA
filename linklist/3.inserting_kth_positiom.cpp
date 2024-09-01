#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    //constructor
    Node (int data){
        val=data;
        next=NULL;
    }
    };
    void insert_newnode(Node* &head,int val){
        Node* new_node=new Node(val);
        new_node->next=head;
        head=new_node;
    }
    //function to print linklist
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    // inserting  at tail
    void insert_tail(Node* head,int val){
        Node* new_node=new Node(val);
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
            
        }
        temp->next=new_node;
    }
    ///inset at kth poaition
    void insertat_kth(Node* &head,int val,int pos){
        Node* new_Node=new Node(val);
        if(pos==0){
            new_Node->next=head;
            head=new_Node;
        return;
        }
        int count=0;
        Node* temp=head;
        while(count!=pos-1 ){
            temp=temp->next;
            count++;
        }
        //tamp=pos-1
        new_Node=temp->next;
        temp->next=new_Node;
    }

int main(){
    Node* head=NULL; //initialize head pointer
    insert_newnode(head,12);
    display(head);
    insert_newnode(head,14);
    display(head);
    insert_newnode(head,16);
    display(head);
    insert_newnode(head,18);
    display(head);
    insert_tail(head,123);
        display(head);
    insertat_kth(head,32,2);
            display(head);
    return 0;
}