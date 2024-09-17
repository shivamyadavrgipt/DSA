#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int> q1;
    queue<int> q2;
    void pop(){
        if(!q1.empty()){
            q1.pop();
        }
    }
    int top(){
        if(!q1.empty()){
            return q1.front();
        }
        
    }
    void push(int x){
        if(q1.empty()){
            q1.push(x);
        }
        if(!q1.empty()){
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
        }
        while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
        }
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    
return 0;
}