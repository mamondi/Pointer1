#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;

    std::cout << "������ �����: ";
    std::cin >> num;

    int* ptr = &num;

    if (*ptr > 0)
        std::cout << "����� ������." << std::endl;
    else if (*ptr < 0)
        std::cout << "����� ��'����." << std::endl;
    else
        std::cout << "����� ����." << std::endl;

    return 0;
}