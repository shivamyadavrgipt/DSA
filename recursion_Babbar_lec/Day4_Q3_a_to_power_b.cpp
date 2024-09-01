#include <iostream>
using namespace std;

double solving(int a, int b) {
    // Base case: any number raised to the power of 0 is 1
    if (b == 0) {
        return 1;
    }
    // Base case: 0 raised to any positive power is 0
    else if (a == 0) {
        return 0;
    }
    // Handling negative exponents
    if (b < 0) {
        return 1.0 / solving(a, -b);
    }
    // Recursive step: a^b = a * a^(b-1)
    return a * solving(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    double ans = solving(a, b);
    cout << "Result: " << ans << endl;

    return 0;
}
