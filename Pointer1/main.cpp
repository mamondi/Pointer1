#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "Після обміну:" << endl;
    cout << "Перше число: " << num1 << endl;
    cout << "Друге число: " << num2 << endl;

    return 0;
}