//Лабораторная 2, задача 9. Выполнена: Чижов Е.С.

/*
Даны действительные положительные числа x, y, z. Выяснить,
существует ли треугольник с длинами сторон x, y, z.
*/

#include <iostream>

using namespace std;

int task_9() {
    long double x, y, z;
    cout << "Enter X, Y, Z (Sides of triangle): " << endl;
    cin >> x >> y >> z;
    if (x <= 0 || y <= 0 || z <= 0)
        cout << "Enter correct length!";
    else if (x + y > z) {
        if (x + z > y) {
            if (y + z > x) {
                cout << "Triangle exists!" << endl;
            } else
                cout << "Triangle don't exist!" << endl;
        } else
            cout << "Triangle don't exist!" << endl;
    } else
        cout << "Triangle don't exist!" << endl;
    return 0;
}