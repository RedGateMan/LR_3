#include <iostream>
#include "Tasks.h"

using namespace std;

int main() {
    int a;
    cout << "Enter task number:";
    cin >> a;
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
            task_5();///OK
            break;
        case 6:
            task_6();///OK
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
        case 10:
            task_10();///OK
            break;
        case 11:
            task_11();///OK
            break;
        case 12:
            task_12();///OK
            break;
        case 13:
            task_13();///OK
            break;
        case 14:
            task_14();///OK
            break;
        case 15:
            task_15();///OK
            break;
        case 16:
            task_16();///OK
            break;
        case 17:
            task_17();///OK
            break;
        default:
            cout << "Vadim, enter correct task number!";
            break;
    }
}