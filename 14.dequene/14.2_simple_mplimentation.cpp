#include<iostream>
using namespace std;
struct deque{
    int size;
    int cap;
    int *arr;
    deque(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
        bool isfull(){return size==cap;}
    bool isempty(){return size==0;}
    void insertRear(int x){
        if(isfull()) return;
        arr[size]=x;
        size++;
    }
    void deleterear(){
        if(isempty()){return; }
        size--;        
    }
    int getRear(){
        if(isempty()){return -1;}
        else
            return arr[size-1];  
    }
    void insertFront(int x){
        if(isfull()){return;}
        for (int i=size-1; i>=0 ; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }
    void deleteFront(){
        if(isempty()){return;}
        for (int i = 0; i <size-1; i++)
        {
            arr[i]=arr[i + 1];
        }
        size--;
    }
    int getFront(){
        if(isempty()){return -1;}
        else return arr[0];
    }
};
int main(){
    deque d(5);
    d.insertFront(4);
    d.insertRear(5);
    d.insertRear(6);
    cout<<"top before delete:- "<<d.getFront()<<" "<<endl;
    d.deleteFront();
    cout<<"Top after delete:- "<<d.getFront()<<" ";
    return 0;
}