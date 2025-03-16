#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}
int second_largest(int arr[],int n){
    int l=largest(arr,n);
    int res=-1;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[l]){
            if(res==-1){
                res=j;
            }
        }
         else if(arr[j]>arr[j-1]){
            res=j;
        }
    }
    return res;

}
int main(){
    int arr[] = {5, 20, 12, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = second_largest(arr, n);
    if (result != -1) {
        cout << "Second largest element is: " << arr[result] << endl;
    } else {
        cout << "No second largest element found." << endl;
    }

    return 0;
}