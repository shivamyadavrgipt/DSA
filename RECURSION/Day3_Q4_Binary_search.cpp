#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int h,int key){
    if (l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if (key>arr[mid])
    {
        return binarysearch( arr,mid+1, h, key);
    }
    else{
        return binarysearch( arr,l, mid-1, key);
    }
}
int main(){
    int arr[]={2,6,12,13,345};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=45;
    int ans=binarysearch( arr,0,n-1, key);
    if(ans!=-1){
        cout<<"Ha hai";
    }
    else
    cout<<"Nhi hai";
    return 0;
}