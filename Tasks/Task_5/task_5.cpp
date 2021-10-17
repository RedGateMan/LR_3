//Лабораторная 3, задача 5. Выполнена: Чижов Е.С.
//Вариант 11

/*
 * Необходимо разложить функцию Y(x) из своего варианта в ряд
 * S(x), затем с помощью полученного ряда найти значение функции и сравнить его
 * со значением, вычисленным с помощью стандартных функций. Программа
 * должна запросить у пользователя количество членов ряда (n), затем запросить у
 * пользователя количество чисел, от которых он хочет посчитать функцию, затем
 * пользователь вводит по одному числу (x от 0.1, до 1), программа считает значение
 * функции с помощью ряда и с помощью стандартных функций и выводит оба
 * значения. Использование <cmath> запрещено.
*/
#include <iostream>
#include <cmath>
#include "E:\LR's\LR_3\Tasks\functions.h"

using namespace std;

long double function(long double x, long double N) {
    long double result = 0;
    long long n = 0;
    do {
        result += myPow(-1, n) * (2 * myPow(n, 2) + 1) / myFact(2 * n) * myPow(x, 2 * n);
        n++;
    } while (n < N);
    return result;
}

int task_5() {

    long long N;
    cout << "Enter amount of steps 0 < N < 11: ";
    N = readInt(1, 10);
    long long amount;
    cout << "Enter amount of arguments: ";
    amount = readInt(0, 1e6);
    long double x;
    for (int i = 0; i < amount; i++) {
        cout << "Enter x: ";
        x = readFloat(0.1, 1);
        cout << "S(x) = " << function(x, N) << endl;
        cout << "Y(x) = " << (1 - pow(x, 2) / 2) * cos(x) - x / 2 * sin(x) << endl;
    }
    return 0;
}
