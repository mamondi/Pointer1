#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;

    std::cout << "������ ����� �����: ";
    std::cin >> num1;

    std::cout << "������ ����� �����: ";
    std::cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        std::cout << "�������� �����: " << *ptr1 << std::endl;
    }
    else if (*ptr2 > *ptr1) {
        std::cout << "�������� �����: " << *ptr2 << std::endl;
    }
    else {
        std::cout << "����� ���" << std::endl;
    }

    return 0;
}