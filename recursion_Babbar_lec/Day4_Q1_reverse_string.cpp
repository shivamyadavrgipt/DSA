#include<iostream>
using namespace std;
string reverse(string str1,int l,int h){
    //base casee
    if(l>=h){
        return str1;
    }
    else{
    swap(str1[l],str1[h]);
}
return reverse(str1,l+1,h-1);
}
int main(){
    string str1="Ashuyadav";
    int s=str1.length();
    string str_reversed=reverse(str1,0,s-1);
    cout<<str_reversed<<" ";
        cout<<str1<<" ";
    return 0;
}