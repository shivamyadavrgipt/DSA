#include <bits/stdc++.h>
using namespace std;

int maxone(int arr[], int n) {
    int res = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) { // Ensure we count only ones
            count++;
            res = max(res, count);
        } else {
            count = 0;
        }
    }
    return res;
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 1, 1, 1};  // Fix array values for proper testing
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum consecutive ones: " << maxone(arr, n) << endl;
    return 0;
}
