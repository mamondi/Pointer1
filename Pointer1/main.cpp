#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;

    std::cout << "¬вед≥ть число: ";
    std::cin >> num;

    int* ptr = &num;

    if (*ptr > 0)
        std::cout << "„исло додатнЇ." << std::endl;
    else if (*ptr < 0)
        std::cout << "„исло в≥д'Їмне." << std::endl;
    else
        std::cout << "„исло нуль." << std::endl;

    return 0;
}