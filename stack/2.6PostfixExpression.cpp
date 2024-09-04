
#include<iostream>
#include<stack>
#include<math.h>//for "^" operator
using namespace std;
void evaluatePrefix(string s){
    stack<int> st;
    //in prefix we iterate from right to left
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else { //operator wala cases
                int op2=st.top();
        st.pop();
        int op1=st.top();
        st.pop();
        switch (s[i])
        {
        case '+':
            st.push(op1+op2);
            break;
        case '-':
            st.push(op1-op2);
            break;
        case '*':
            st.push(op1*op2);
            break;
        case '/':
            st.push(op1/op2);
            break;                    
        default:
            break;
        }
        }

    }
    cout<<st.top()<<endl;
}
int main(){
    string s="45+2/5*7+";
    evaluatePrefix(s);
    return 0;
}