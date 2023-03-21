﻿#include <iostream>
#include <string>
#include <windows.h>
#include "Counter.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    Counter number;

    string  symbols;
    string answer;


    while (true) {
        cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        cin >> answer;

        if (answer == "да") {
            cout << "Введите начальное значение счётчика: " << endl;

            cin >> n;
            number = Counter(n);
            break;
        }
        else if (answer == "нет") {
            break;
        }
        else {
            cout << "Неверный ответ, поробуйте снова" << endl;
        };
    }



    while (true) {

        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> symbols;

        if (symbols == "+") {
            number.add();
        }
        else if (symbols == "-") {
            number.subtract();
        }
        else if (symbols == "=") {
            cout << number.getx() << endl;
        }
        else if (symbols == "х") {

            return true;
        }
        else {
            cout << "Неверный символ, попробуйте снова" << endl;
        }
    };
};
