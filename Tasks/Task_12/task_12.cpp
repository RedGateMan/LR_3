//Лабораторная 2, задача 12. Выполнена: Чижов Е.С.

/*
Определить, попадает ли круг с точкой в центре которая имеет
координату M1(x1, y1) и радиусом r в круг с точкой в центре которая имеет
координату M2(x2, y2) и радиусом R. Если круг M1 попадает в круг M2, вывести
сообщение “Да”. Если круг M2 попадает в круг M1 вывести сообщение “Да, но
справедливо обратное для двух фигур”. Если круги пересекаются, но не
поглощают друг друга, то вывести сообщение “Фигуры пересекаются”. Иначе
вывести сообщение “Ни одно условие не выполнено”
*/
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int task_12(){
    system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    long double x1, y1, x2, y2, firstCircleRadius, secondCircleRadius;
    cout << "Enter coordinates of first circle center:" << endl;
    cin >> x1 >> y1;
    cout << "Enter first circle radius:" << endl;
    cin >> firstCircleRadius;
    cout << "Enter coordinates of second circle center:" << endl;
    cin >> x2 >> y2;
    cout << "Enter second circle radius:" << endl;
    cin >> secondCircleRadius;
    long double distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    if (distance < secondCircleRadius && distance + firstCircleRadius <= secondCircleRadius){
        cout << "Да";
    } else if (distance < firstCircleRadius && distance + secondCircleRadius <= firstCircleRadius){
        cout << "Да, но справедливо обратное для двух фигур";
    }else if (distance <= firstCircleRadius + secondCircleRadius){
        cout << "Фигуры пересекаются";
    } else {
        cout << "Ни одно условие не выполнено";
    }
    return 0;
}