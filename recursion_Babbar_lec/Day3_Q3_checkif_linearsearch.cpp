#include<iostream>
using namespace std;

int get_sum(int *arr, int n,int key) {
    if (n == 0) {
        return 0;
    }
    if (arr[0]=key) {
        return 1;
    }
    else {
        get_sum(arr + 1, n - 1,8);
        return 0;
    }
}

int main() {
    int arr[4] = {3, 2, 57, 8};
    int n = 4;
    int key=8;
    int sum = get_sum(arr, n,8);
    cout << sum <<"==true hai  "<<"sum wale q ko chipkaya hai code"<< " printhogya_hAI" << endl;
    return 0;
}
