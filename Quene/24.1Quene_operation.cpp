#include<iostream>
using namespace std;
int n=4;
class quene{
    public:
    int *arr;
    int front;
    int back;
    public:
    quene(){
        arr=new int[n];
        front=-1;
        back=-1; 
    }
    void insertinArray(int x){
        if(back==n-1){
            cout<<"Quee is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if (front==-1)
        {
            front++;
        }
    cout<<arr[back]<<" ";            
    }
    
    int peak() {  // Added a 'peak()' function to prevent errors
            if (front == -1 || front > back) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return arr[front]; // Return the front element
            cout<<endl;
        }
        void removefromfront(){
            front++;
            return ;
        }
};    
int main(){
    quene q;
    q.insertinArray(2);
    q.insertinArray(3);
    q.insertinArray(4);
    q.insertinArray(5);
    q.peak();
    cout<<endl<<q.peak()<<" ::Peak value"<<endl;
    q.removefromfront();
    q.peak();
    cout<<endl<<q.peak()<<" ::Peak value 2"<<endl;
return 0;
}