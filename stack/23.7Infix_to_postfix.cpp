#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int precedence(char c){
    if(c=='^')
        return 3;
    else if (c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else
        return -1;
}
void Infixtopostfix(string s){
    stack<char> st;
    string ans="";
    for(int i=0; i <s.length();i++){
        if(s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'){
            ans+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while (!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
                
            }
            st.pop();
        }
        else{
            while (!st.empty() && precedence(st.top())<=precedence(s[i]))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    cout<<"Post fix Expression"<<ans;
}
int main(){
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    Infixtopostfix(infix);
    return 0;
}