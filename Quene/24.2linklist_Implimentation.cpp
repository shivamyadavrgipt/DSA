// As in array size is fixed 
//in case of dynamic array also we also get extra space which has no use
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=nullptr;
    }
};
class Queue{
    private:
    Node* front;
    Node* back;

    public:
    Queue(){
        front=nullptr;
        back=nullptr;
    }
    void enquene(int x){
    Node* temp=new Node(x);
    if(front==nullptr){
        front=back=temp;
        return;
    }
    
        back->next=temp;
        back=temp;
}
    void dequene(){
        if(front==nullptr){
            front=back=nullptr;
            return;
        }
     
            Node *temp=front;   
            front=front->next;
            delete(temp);
    }
    void display(){
        if(front==nullptr){
            cout<<"Quene is Empty";
            return;
        }
        Node* temp=front;
        while (temp!=nullptr)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
        Queue q;
        q.enquene(2);
        q.enquene(3);
        q.enquene(4);
        q.display();
        q.dequene();
        q.display();
        q.dequene();
        q.display();
        q.dequene();
        q.display();
    return 0;
}