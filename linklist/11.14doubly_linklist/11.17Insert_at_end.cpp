#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int x) {
        val = x;
        next = nullptr;
        prev = nullptr;
    }
};

class doublyll {
    public:
    Node* head;
    
    // Constructor
    doublyll() {
        head = nullptr;
    }

    void insertAtEnd(int x) {
        Node* new_node = new Node(x);
        if (head == nullptr) {
            head = new_node; // First node becomes head
        } else {
            Node* temp = head;
            // Traverse to the last node
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            // Adjust the pointers to insert the new node at the end
            temp->next = new_node;
            new_node->prev = temp;
        }
    }

    void display() {
        Node* temp = head;
        // Traverse the list from head to end
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    doublyll dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(4);
    dll.insertAtEnd(6);
    dll.display(); // Output should be: 2 4 6
    return 0;
}
