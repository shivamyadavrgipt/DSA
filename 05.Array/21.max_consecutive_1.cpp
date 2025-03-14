//naive approch

#include <bits/stdc++.h>
using namespace std;
    int maxone(int arr[],int n){
        int res=0;
        for(int i=0;i<n;i++){
            int count=0;
                for(int j=i;j<n;j++){
                    if(arr[i]==1){
                        count++;
                        res=max(count,res);
                    }
                    else {
                        break;
                    }
                }
            }
        }
        return count;
    }
int main(){
    int arr[6]={0,1,3,4,5,1,1,1};
    maxone(arr[],6);
    return 0;
}