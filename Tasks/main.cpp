#include <iostream>
#include "Tasks.h"

//TODO: Проверка на тип входных данных и проверки на отрицательное или положительное

int main() {
    int a;
    std::cout << "Enter task number:";
    std::cin >> a;
    switch (a) {
        case 1:
            task_1();///OK
            break;
        case 2:
            task_2();///OK
            break;
        case 3:
            task_3();///OK
            break;
        case 4:
            task_4();///OK
            break;
        case 5:
            task_5();///NEED TESTING
            break;
        case 6:
            task_6();///NEED TESTING
            break;
        case 7:
            task_7();///OK
            break;
        case 8:
            task_8();///OK
            break;
        case 9:
            task_9();///OK
            break;
        default:
            std::cout << "Vadim, enter correct task number!";
            break;
    }
}