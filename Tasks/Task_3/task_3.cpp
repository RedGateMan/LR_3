//Лабораторная 3, задача 3. Выполнена: Чижов Е.С.

/*
Написать программу нахождения максимального из двух
вещественных чисел X и Y с использованием тернарной операции. Написать
два варианта программы. С использованием переменной логического типа для
определения условия и без неё.
*/
#include <iostream>
#include <cmath>

using namespace std;


int task_3() {
    long double y = 0, x = 0;
    const long double B = M_PI / 2, A = 0, M = 20, H = (B - A) / M;
    for(int i = 0; i <= ((B - A) / H); i++){
        x = A + i * H;
        y = sin(x) - cos(x);
        cout << i+1 << ")" << "x = " << x << " y = " << y << endl;
    }
    return 0;
}