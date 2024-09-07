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
// Function to make the linked list circular
void circularll(Node* &head) {
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;  // Point the last node to the head, making it circular
}

// Function to display the circular linked list
void displayCircularLL(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head=new Node(2);
    head->next=new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);
    circularll(head);
    displayCircularLL(head);
    return 0;
}
