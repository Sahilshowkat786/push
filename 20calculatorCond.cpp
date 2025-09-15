#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Conditional (ternary) operator used here
    int result = (op == '+') ? (a + b) :
                 (op == '-') ? (a - b) :
                 (op == '*') ? (a * b) :
                 (op == '/') ? (b != 0 ? a / b : 0) :
                 0; // if operator is invalid

    // Special check for errors
    if (op == '/' && b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    }
    else if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid operator entered!" << endl;
    }
    else {
        cout << "Result = " << result << endl;
    }

    return 0;
}
