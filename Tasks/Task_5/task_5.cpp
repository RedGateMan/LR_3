//Лабораторная 3, задача 5. Выполнена: Чижов Е.С.

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

using namespace std;

long double myPow(long double a, long long b) {
    long double asave = a;
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else
        for (int i = 1; i < b; i++) {
            a *= asave;
        }
    return a;
}

unsigned long long myFact(long long x) {///Максимально вводимое число, которое влезает в ячейку память -- 20!
    unsigned long long result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

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
    cout << "Enter integer N: ";
    cin >> N;
    long long amount;
    cout << "Enter amount of arguments: ";
    cin >> amount;
    long double x;
    for (int i = 0; i < amount; i++) {
        cout << "Enter x: ";
        cin >> x;
        cout << "S(x) = " << function(x, N) << endl;
        cout << "Y(x) = " << (-1 - pow(x, 2) / 2) * cos(x) - x / 2 * sin(x) << endl;
    }
    return 0;
}