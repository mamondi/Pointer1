#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть операцію (+, -, *, /): ";
    cin >> operation;

    cout << "Введіть друге число: ";
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
            cout << "Ділення на нуль" << endl;
            return 1;
        }
    }

    cout << "Результат: " << *ptrResult << endl;

    return 0;
}