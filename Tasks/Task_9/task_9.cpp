//Лабораторная 3, задача 9. Выполнена: Чижов Е.С.

/*
Вычислить сумму ряда
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include "E:\LR's\LR_3\Tasks\functions.h"

using namespace std;

int task_9() {
    long long N;
    cout << "Eneter n:";
    N = readInt(0, 1e9);
    long double a[N];
    long double sum = 0;
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 1000;
        sum += pow(2, i) * pow(-1, i) * a[i];
    }
    /*for (int i = 0; i < N; i++) {
        cout << a[i] << endl;
    }
    */
    cout << sum;
    return 0;
}