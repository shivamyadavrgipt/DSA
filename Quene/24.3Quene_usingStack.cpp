#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> st1;
    stack<int> st2;

public:
    // Enqueue an element into the queue
    void enqueue(int x) {
        st1.push(x);
    }
    
    // Dequeue an element from the queue
    int dequeue() {
        if (st1.empty() && st2.empty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        
        // Transfer elements from st1 to st2 if st2 is empty
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        // If st2 is not empty, return the top element
        if (!st2.empty()) {
            int topval = st2.top();
            st2.pop();
            return topval;
        }
        
        // Fallback return (should not reach here if the logic is correct)
        return -1;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl; // Output: 10
    cout << q.dequeue() << endl; // Output: 20
    cout << q.dequeue() << endl; // Output: 30
    cout << q.dequeue() << endl; // Output: Queue is empty!

    return 0;
}
