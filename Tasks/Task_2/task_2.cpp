//Лабораторная 3, задача 2. Выполнена: Чижов Е.С.

/*
 * Используя do while найти сумму ряда с точностью e = 10^-3
*/
#include <iostream>
#include <cmath>

using namespace std;


int task_2() {
    long double d = 0, result = 0;
    long double n = 0;
    do {
        d = pow(1. / 2, n) + pow(1. / 3, n);
        result += d;
        n++;
    } while (d >= 1e-3);
    cout << "Result: " << result;
    return 0;
}