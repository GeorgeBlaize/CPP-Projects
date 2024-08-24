#include<bits/stdc++.h>

using namespace std;

void calculator()
{
    char operation;
    float num1, num2;
    char cont;

    do {
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid operator" << endl;
                break;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');
}

int main()
{
    calculator();
    return 0;
}