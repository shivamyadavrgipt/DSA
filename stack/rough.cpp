#include <iostream>
#include <stack>
#include <cctype> // for isalnum() and isalpha()
using namespace std;

// Corrected function parameter type from string to char
int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void InfixToPostfix(string s) {
    stack<char> st;
    string ans = "";
    
    for (int i = 0; i < s.length(); i++) {
        // Check if the character is an operand (alphabetical)
        if (isalnum(s[i])) { // Fixed from (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')
            ans += s[i];
        } else if (s[i] == '(') { // Fixed comparison from s[i]='(' to s[i] == '('
            st.push(s[i]); // Fixed stack operation to push the current character
        } else if (s[i] == ')') { // Fixed comparison from s[i]=')' to s[i] == ')'
            // Pop from stack until '(' is encountered
            while (!st.empty() && st.top() != '(') {
                ans += st.top(); // Append top of stack to result
                st.pop(); // Properly pop the top element
            }
            st.pop(); // Remove the '(' from the stack
        } else { // For operators
            // Pop from stack while top of stack has higher or equal precedence
            while (!st.empty() && precedence(st.top()) >= precedence(s[i])) {
                ans += st.top(); // Append top of stack to result
                st.pop(); // Properly pop the top element
            }
            st.push(s[i]); // Push the current operator onto the stack
        }
    }

    // Pop all the remaining operators from the stack
    while (!st.empty()) {
        ans += st.top(); // Append remaining operators to result
        st.pop(); // Properly pop the top element
    }

    cout << "Postfix Expression: " << ans << endl;
}

int main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    InfixToPostfix(infix);
    return 0;
}
