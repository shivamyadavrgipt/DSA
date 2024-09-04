#include <iostream>
#include <stack>
using namespace std;

void reverseString(const string& s) {
    stack<string> st;
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (!word.empty()) {
                st.push(word);
                word = "";
            }
        }
    }
    
    if (!word.empty()) {
        st.push(word);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    string s = "Ashu Yadav HAi";
    reverseString(s);
    return 0;
}
