#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int numbers[size] = { 1, 2, 3, 4, 5 };

    int* startPtr = numbers;
    int* endPtr = numbers + size - 1;

    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        ++startPtr;
        --endPtr;
    }

    cout << "Масив з обернутим порядком:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}