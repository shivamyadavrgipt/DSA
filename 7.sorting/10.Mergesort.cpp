// a[i]<


#include <bits/stdc++.h>
using namespace std;
void mergetoarr(int a[],int b[],int m,int n){
    int i=0,j=0;
    while (i<m && j<n){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }    
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}
int main(){
    int a[] = {10, 20, 35}; 
    int b[] = {5, 50, 70, 100, 100};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    mergetoarr(a,b,m,n);
    return 0;
}
