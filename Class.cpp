#include <iostream>
#include "Counter.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string YesorNot;
    int num;
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> YesorNot;
    while (YesorNot != "да" && YesorNot != "нет") {
        std::cout << "Вы ввели неправильное значение \n";
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> YesorNot;
    }
    if (YesorNot == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num;
        Counter counter(num);

        Command(counter);
    }

    else {
        Command(counter);

    }

    return 0;
}
