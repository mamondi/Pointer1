#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "������ ����� �����: ";
    cin >> num1;

    cout << "������ �������� (+, -, *, /): ";
    cin >> operation;

    cout << "������ ����� �����: ";
    cin >> num2;

    double result;
    double* ptrResult = &result;

    if (operation == '+') {
        *ptrResult = num1 + num2;
    }
    else if (operation == '-') {
        *ptrResult = num1 - num2;
    }
    else if (operation == '*') {
        *ptrResult = num1 * num2;
    }
    else if (operation == '/') {
  
        if (num2 != 0) {
            *ptrResult = num1 / num2;
        }
        else {
            cout << "ĳ����� �� ����" << endl;
            return 1;
        }
    }

    cout << "���������: " << *ptrResult << endl;

    return 0;
}