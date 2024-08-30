#include <iostream>

using namespace std;

void displayMultiplicationTable(int number, int range) {
    cout << "Multiplication Table for " << number << endl;
    for (int i = 1; i <= range; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int number, range;
    char choice;

    do {
        cout << "Enter the number for which you want the multiplication table: ";
        cin >> number;

        cout << "Enter the range (up to which multiple you want to display): ";
        cin >> range;

        cout << endl;

        displayMultiplicationTable(number, range);

        cout << "Do you want to generate another table? (y/n): ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

