#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int sourceArray[size] = { 1, 2, 3, 4, 5 };
    int destinationArray[size];

    int* sourcePtr = sourceArray + size - 1;
    int* destPtr = destinationArray;

    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr;
        --sourcePtr;
        ++destPtr;
    }

    cout << "Скопійований масив зі зворотнім порядком:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}