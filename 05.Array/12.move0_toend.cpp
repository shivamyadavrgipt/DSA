#include<bits/stdc++.h>
using namespace std;

void movezero(int arr[],int n){
    int temp[n];
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[res]=arr[i];
            res++;
        }
    }
    while(res<n){
        temp[res]=0;
        res++;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
int main(){
    int arr[] = {5, 0, 12, 0, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    movezero(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}