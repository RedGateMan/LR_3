//Лабораторная 2, задача 11. Выполнена: Чижов Е.С.

/*
Определить, какая из двух фигур (круг или квадрат) имеет большую
площадь. Известно, что сторона квадрата равна a, радиус круга r. Библиотеку
<cmath> использовать запрещено.
*/
#include <iostream>

#define Pi 3.141592653
using namespace std;

int task_11() {
    long double a, r, squareArea, circleArea;
    cout << "Enter length of square's side: a = ";
    cin >> a;
    cout << "Enter length of circle's radius: r = ";
    cin >> r;
    squareArea = a * a;
    circleArea = Pi * r * r;
    if (squareArea > circleArea) {
        cout << "The area of square is bigger: S = " << squareArea;
    } else if (circleArea > squareArea) {
        cout << "The area of circle is bigger: S = " << circleArea;
    } else
        cout << "Areas are equal";
    return 0;
}