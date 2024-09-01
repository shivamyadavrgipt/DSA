#include<iostream>
using namespace std;

int get_sum(int *arr, int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return arr[0];
    }
    else {
        int sum = arr[0] + get_sum(arr + 1, n - 1);
        return sum;
    }
}

int main() {
    int arr[4] = {3, 2, 57, 8};
    int n = 4;
    int sum = get_sum(arr, n);
    cout << sum << " printhogya_hAI" << endl;
    return 0;
}
