#include <bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n){
    int res=arr[0];
    int maxval=arr[0];
        for(int i=0;i<n;i++){
            maxval=max(maxval+arr[i],arr[i]);
            res=max(maxval,res);
        }
    return res;
}
int main(){
    int arr[] = {-3, 8, -2, 4, -5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to get the size of an array
    cout << "Maximum Subarray Sum: " << findmax(arr, n) << endl;
    return 0;
}