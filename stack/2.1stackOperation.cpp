//Introduction too  STACK

#include<iostream>
using namespace std;
int n=5;
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr= new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
            if(top==-1){
                cout<<"THIS IS EMPTY"<<endl;
                return;     
            }
            top--;
    }
//Ye to int function hai ,Return top element
    int Top(){
        if(top==-1){
        cout<<"Empty hai top"<<endl;
        return -1;
    }
    return arr[top];
}
//Empty stack
    bool empty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
};
int main(){
    stack st;
    st.push(2);
    st.push(4);
    st.push(8);
    st.push(12);
    st.push(16);
    cout << st.Top()<<endl;
    st.empty();
    cout << st.empty()<<endl;
    return 0;
}