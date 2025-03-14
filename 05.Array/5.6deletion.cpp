#include <iostream>
using namespace std;
int deleteone(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]=k){
            break;
        }
    }
    if(i == n){
        return n;
    }
    else{
        for (int j = i; j < n; j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return n-1;
}
int main(){
    int arr[] = {0, 1, 1, 1, 0, 1, 1, 1};  // Fix array values for proper testing
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=1;
    cout << "delete one: " << deleteone(arr,n,k) << endl;
    return 0;
    return 0;
}