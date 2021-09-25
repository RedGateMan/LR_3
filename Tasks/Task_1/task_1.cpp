//Лабораторная 2, задача 1. Выполнена: Чижов Е.С.

/*
Заданы два целых числа x и y. Определите, верно ли, что одно из них
делится на другое без остатка, или нет.
*/

#include <iostream>

using namespace std;

int task_1() {
    int x, y;
    cout << "Enter variables:" << endl;
    cin >> x >> y;
    if (x % y == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

