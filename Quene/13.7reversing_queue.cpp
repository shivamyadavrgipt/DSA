//  reverse using stack
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> q;
void reverse(){
    stack<int> st;
    if(!q.empty()){
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
    }
    if(!st.empty()){
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        
    }
};
int main(){
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverse();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}