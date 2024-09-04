#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Node {
    double operand;
    char op;
    bool isOperand;
};

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L';
}

double perform(double operand1, double operand2, char op) {
    double result;
    if (op == '^') {
        result = pow(operand1, operand2);
    } else if (op == '/') {
        result = operand1 / operand2;
    } else if (op == '*') {
        result = operand1 * operand2;
    } else if (op == '+') {
        result = operand1 + operand2;
    } else if (op == '-') {
        result = operand1 - operand2;
    }
    return result;
}

int main() {
    const int n = 7;
    vector<Node> expr(n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Store operand
            cin >> expr[i].operand;
            expr[i].isOperand = true;
        } else { // Store operator
            cin >> expr[i].op;
            expr[i].isOperand = false;
        }
    }

    int length = n;
    int index;
    char op;
    double result;

    for (int i = 0; i < n / 2; i++) { // number of operators = n / 2
        cout << "\nExpression is...";
        for (int k = 0; k < length; k++) {
            if (k % 2 == 0)
                cout << expr[k].operand << " ";
            else
                cout << expr[k].op << " ";
        }

        index = -1;
        op = '0';
        for (int i = 0; i < length; i++) {
            if (!expr[i].isOperand) {
                if ((prec(expr[i].op) > prec(op)) ||
                    (prec(expr[i].op) == prec(op) && associativity(expr[i].op) == 'R')) {
                    op = expr[i].op;
                    index = i;
                }
            }
        }
        cout << "\nop = " << op;
        cout << "\nindex = " << index;
        result = perform(expr[index - 1].operand, expr[index + 1].operand, op);
        cout << "\nresult = " << result << "\n";
        expr[index - 1].operand = result;

        // Shifting the array elements
        int shift = index;
        for (int j = index + 2; j < length; j++) {
            expr[shift].operand = expr[j].operand;
            expr[shift].op = expr[j].op;
            expr[shift].isOperand = expr[j].isOperand;
            shift++;
        }
        length -= 2;
    }

    return 0;
}
