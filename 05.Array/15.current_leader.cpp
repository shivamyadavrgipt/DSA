#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
    int curle=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>curle){
            curle=arr[i];
            cout<<(arr[i])<<endl;
        }
    }
    
}
int main(){
    int arr[] = {5, 0, 30, 0, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    leader(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}