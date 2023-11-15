#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;

    cout << "¬вед≥ть число: ";
    cin >> num;

    int* ptr = &num;

    if (*ptr > 0)
        cout << "„исло додатнЇ." << endl;
    else if (*ptr < 0)
        cout << "„исло в≥д'Їмне." << endl;
    else
        cout << "„исло нуль." << endl;

    return 0;
}