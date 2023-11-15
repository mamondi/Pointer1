#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int numbers[size] = { 1, 2, 3, 4, 5 };

    int* ptr = numbers;

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *ptr;
        ++ptr;
    }

    cout << "Сума елементів масиву: " << sum << endl;

    return 0;
}