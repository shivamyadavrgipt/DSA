//CODE KARA NHI HU

#include <iostream>
#include 

using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int>& s, int item) {
    if (s.empty()) {
        s.push(item);
        cout<<s.top()<<"  inetbottom empty hai"<<endl;
    } else {
        int topElement = s.top();
        cout<<s.top()<<"  else wal insert booton"<<endl;
        s.pop();
        insertAtBottom(s, item);  // Recursive call
        s.push(topElement);
        cout<<s.top()<<"  Insert at botoom"<<endl;
    }
}

// Function to reverse the stack using recursion (call stack)
void reverseStack(stack<int>& s) {
    if (!s.empty()) {
        int topElement = s.top();
        cout<<s.top()<<" reverse stack top"<<endl;
        s.pop();
        cout<<s.top()<<" reverse stack pop k baad"<<endl;
        reverseStack(s);  // Recursive call
        insertAtBottom(s, topElement);
    }
}

// Function to print the elements of the stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    // Push elements to the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Original Stack: ";
    printStack(s);

    // Reverse the stack
    reverseStack(s);

    cout << "Reversed Stack: ";
    printStack(s);

    return 0;
}
