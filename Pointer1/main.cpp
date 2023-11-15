#include <iostream>
#include <Windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    std::cout << "Після обміну:" << std::endl;
    std::cout << "Перше число: " << num1 << std::endl;
    std::cout << "Друге число: " << num2 << std::endl;

    return 0;
}