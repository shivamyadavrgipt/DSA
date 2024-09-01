#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    // Constructor
    Node(int data) {
        val = data;
        next = NULL;
    }
};

// Function to insert a new node at the head of the list
void insertnew_node(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;  // Initialize the head pointer to NULL

    // Insert new nodes
    insertnew_node(head, 20);
    display(head);
    insertnew_node(head, 10);
    display(head);
    insertnew_node(head, 30);

    // Display the linked list
    display(head);

    return 0;
}
