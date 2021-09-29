//Лабораторная 2, задача 10. Выполнена: Чижов Е.С.

/*
Из величин, определяемых выражениями a = sin(x), b = cos(x), c = ln|x|
при заданном х, определить и вывести на экран дисплея минимальное
значение.
*/
#include <iostream>
#include <iomanip>

using namespace std;

long double fabs(long double x) {
    return x < 0 ? -x : x;
}

long double pow(long double a, long long b) {
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

unsigned long long fact(long long x) {///Максимально вводимое число, которое влезает в ячейку память -- 20!
    unsigned long long result = 1;
    if (x == 0)
        return 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

long double sin(long double x) {
    long long n = 0;
    long double result = 0;
    do {
        result += (pow(-1, n) * pow(x, 2 * n + 1)) / fact(2 * n + 1);
        n++;
    } while (fabs((pow(-1, n) * pow(x, 2 * n + 1)) / fact(2 * n + 1)) > 1e-8);
    return result;
}

long double cos(long double x) {
    long long n = 0;
    long double result = 0;
    do {
        result += (pow(-1, n) * pow(x, 2 * n)) / fact(2 * n);
        n++;
    } while (fabs((pow(-1, n) * pow(x, 2 * n)) / fact(2 * n)) > 1e-8);
    return result;
}

long double
ln(long double x) {
    x = fabs(x);
    if (x <= 0) {
        return 0;
    }
    x = (x - 1) / (1 + x);
    long double x1 = x;
    long double result = x1;
    long long n = 1;
    do {
        x1 = x1 * x * x;
        result += x1 / (2 * n + 1);
        n++;
    } while (n < 100000000);
    return result * 2;
}

int task_10() {
    long double x;
    cout << "Vadim, If X is big, values won't be correctly counted, but lowwest will be lowwest" << endl;
    cin >> x;
    long double a, b, c;
    cout << fixed << setprecision(10);
    if (x >= 2 || x == 0)
        c = 2;
    else
        c = ln(x);
    if (x >= 4) {
        while (x >= 4 && x > 0) {
            x -= 6.28;
        }
    }
    if (x <= -4 && x < 0) {
        while (x <= -4 && x < 0) {
            x += 6.28;
        }
    }
    a = sin(x);
    b = cos(x);
    //cout << a << " " << b << " " << c;
    if (min(a, min(b, c)) == a) {
        cout << "sin(x) = " << min(a, min(b, c));
    } else if (min(a, min(b, c)) == b) {
        cout << "cos(x) = " << min(a, min(b, c));
    } else
        cout << "ln(x) = " << min(a, min(b, c));
    return 0;
}