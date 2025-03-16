#include <iostream>
using namespace std;
int deleteone(int arr[],int n,int k){
    int i;
    for (i = 0; i < n; i++)
    {   
        if(arr[i]==k){
            break;
        }
    }
    if(i == n){
        return n;
    }
    else{
        for (int j = i; j < n-1; j++)
        {
            arr[j]=arr[j+1];
            // cout<<i<<endl;
        }
    }
    return n-1;
}
int main(){    
    int arr[] = {0, 1, 1, 1, 0, 1, 1, 1};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 1;

cout << "New size after deleting one occurrence of " << k << ": " << deleteone(arr, n, k) << endl;

// Print the modified array
for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}