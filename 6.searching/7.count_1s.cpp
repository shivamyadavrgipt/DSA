#include <bits/stdc++.h>
using namespace std;
int countOnes(int arr[],int n,int l, int h){
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==0){
            l=m+1;
        }
        else{
            if(m==n-1||arr[m]!=arr[m-1]){
                return n-m;
            }
            else{
                h=m-1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of ones: " << countOnes(arr, n, 0, n - 1) << endl;
    return 0;
}