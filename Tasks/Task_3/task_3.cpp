//Лабораторная 2, задача 3. Выполнена: Чижов Е.С.

/*
Написать программу нахождения максимального из двух
вещественных чисел X и Y с использованием тернарной операции. Написать
два варианта программы. С использованием переменной логического типа для
определения условия и без неё.
*/
#include <iostream>

using namespace std;

int task_3() {
    double X, Y;
    bool flag;
    cin >> X;
    cin >> Y;
    cout << "The biggest is " << (X > Y ? X : Y) << endl;
    //bool
    flag = X > Y;
    cout << "The biggest is " << (flag ? X : Y) << endl;
    return 0;
}
