#include<iostream>
using namespace std;
bool checkifsorted(int arr[],int size){
    if(size==0||size==1){
        return true;
            }
    if( arr[0]>arr[1]){
                return false;
            }
    else {

            return checkifsorted(arr+1,size-1);
        }
        
}
int main(){
    int arr[5]={3,4,6,60,58};
    int size=5;
    bool ans=checkifsorted(arr,size);
    if(ans){
        cout<<"true";
    }
    else 
    cout<<"false ya nhi hai bhai mere";
    return 0;
}