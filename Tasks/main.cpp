#include <iostream>
#include "Tasks.h"

int main() {
    int a;
    std::cout << "Enter task number:";
    std::cin >> a;
    switch (a) {
        case 1:
            task_1();///OK
            break;
        case 2:
            task_2();///NO
            break;
        case 3:
            task_3();///NO
            break;
        case 4:
            task_4();///NO
            break;
        case 5:
            task_5();///NO
            break;
        case 6:
            task_6();///NO
            break;
        case 7:
            task_7();///NO
            break;
        case 8:
            task_8();///NO
            break;
        case 9:
            task_9();///NO
            break;
        default:
            std::cout << "Vadim, enter correct task number!";
            break;
    }
}