#include<iostream>
using namespace std;
int getpower(int a,int b){
    //base case
    if(a==0){
        return 0;
    }
    if(b==0){
        return 1;
    }
    else
        return a*getpower(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=getpower(a,b);
    cout<<ans<<" ";
    return 0;
}