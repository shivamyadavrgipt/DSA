#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to reverse the doubly linked list
void reverse(Node*& head_ref) {
    Node* temp = nullptr;
    Node* current = head_ref;


    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

   
    if (temp != nullptr) {
        head_ref = temp->prev;  
    }
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    // Manually creating nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    // Assigning data to each node
    head->data = 40;
    second->data = 30;
    third->data = 20;
    fourth->data = 10;

    // Linking the nodes
    head->next = second;
    head->prev = nullptr;
    second->next = third;
    second->prev = head;
    third->next = fourth;
    third->prev = second;
    fourth->next = nullptr;
    fourth->prev = third;

    // Original list
    cout << "Original Linked List: ";
    printList(head);

    // Reverse the doubly linked list
    reverse(head);

    // Reversed list
    cout << "\nReversed Linked List: ";
    printList(head);

    return 0;
}
