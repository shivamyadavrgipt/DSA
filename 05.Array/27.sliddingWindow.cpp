#include <bits/stdc++.h>
using namespace std;
int slidingwindow(int arr[],int n,int k){
    int res=INT_MIN;
    for(int i=0;i<(n-k);i++){
        int sum=0;
        for(int j=0;j<=k;j++){
            sum=+arr[j+i];
            res=max(sum,res);
            // cout<<"Firts"<<sum<<endl;
        }
    }
    return res;
}
int main(){
    int arr[] = {10,5,-2,20,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=3;
    cout << "herer is the answer:"<<slidingwindow(arr,n,k) <<endl;  
    return 0;
}

//(i)No porn
//(ii)No reel
//(iii)More and more hardwork that is yoour fulll effort for completing this leave the rest