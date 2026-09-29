#include <iostream>
#include "mathfuncs.h"

using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << add(a, b) << endl;
            break;

        case '-':
            cout << subtract(a, b) << endl;
            break;

        case '*':
            cout << multiply(a, b) << endl;
            break;

        case '/':
            if (b != 0)
                cout << divide(a, b) << endl;
            else
                cout << "Cannot divide by zero" << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
