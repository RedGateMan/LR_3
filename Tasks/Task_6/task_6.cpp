//Лабораторная 3, задача 6. Выполнена: Чижов Е.С.
//Вариант 11

/*
 * Необходимо приближенно найти корень уравнения f(x) = 0 для
 * функции из своего варианта. Корень нужно найти по следующему алгоритму:
 * перебираем значения от начала до конца интервала с некоторым шагом и ищем
 * значение функции, минимальное по модулю. Аргумент, при котором оно
 * достигается, считаем корнем уравнения. Программа должна запросить у
 * пользователя, на сколько частей разделить область поиска корня, вычислить шаг,
 * с которым нужно проходить значения, пройти в цикле нужные значения, найти
 * корень и вывести его.
*/
#include <iostream>
#include <cmath>
#include "E:\LR's\LR_3\Tasks\functions.h"

using namespace std;

int task_6() {
    long double x = 0.5;
    cout << "Enter amount of search areas:";
    long double amountOfAreas;
    amountOfAreas = readInt(0, 1e9);
    long double step = 1./amountOfAreas;
    long double function;
    long double minFunction = 1e19;
    long double minArgument;
    for (; x <= 1.5; x += step) {
        function = sin(log10(x)) + x * 1/tan(pow(x,2));
        if(fabs(function) < minFunction){
            minArgument = x;
            minFunction = fabs(function);
        }
    }
    cout << "x = " << minArgument;
    return 0;
}