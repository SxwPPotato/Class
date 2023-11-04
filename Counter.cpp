#include <iostream>
#include<string>
#include<Windows.h>
#include "Counter.h"



Counter::Counter() {
    num = 1;
}

Counter::Counter(int num) {
    this->num = num;
}


void Counter::add() {
    num++;
}

void Counter::subtraction() {
    num--;
}
void Counter::equals() {
    std::cout << num << "\n";
}


void Command(Counter& counter) {
    char command;
    do {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (static_cast<char>(command)) {
        case '+': counter.add(); break;
        case '-': counter.subtraction(); break;
        case '=': counter.equals(); break;
        case 'x': std::cout << "До свидания!"; break;
        case 'х': std::cout << "До свидания!"; break;
        default: std::cout << "Ошибка!Такого знака нет или не предусмотрен программой\n"; break;
        }
    } while (command != 'x' && command != 'х');
}