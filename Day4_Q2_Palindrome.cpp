//modify previous case only
//first reversre string then check reversed and  not reversed string are equal if equal then pallindrome
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
        if(str_reversed==str1){
            cout<<"Yup It is Pallindrome"<<endl;
            }
            else {
            cout<<"Its not case of paliindrrome";
            }
                return 0;
        }