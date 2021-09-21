//Лабораторная 2, задача 4. Выполнена: Чижов Е.С.

/*
Дан квадрат с вершинами в точках (0, 0), (0, k), (k, k), (k, 0).
Вычислите наименьшее из расстояний от точки с координатами (x, y), лежащей
внутри квадрата, до сторон данного квадрата. Координаты вещественные. Если
точка лежит за пределами квадрата, выведите сообщение об этом и расстояние
до ближайшей стороны квадрата.
*/
#include <iostream>
#include <cmath>

typedef long double ld;
using namespace std;

int task_4() {
    ld k, x, y;
    cout << "Enter k = ";
    cin >> k;
    cout << "Enter (x,y)";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "Minimal distance is 0";
        return 0;
    }
    if (x <= 0 && y <= 0 && k <= 0) {
        x = -x;
        y = -y;
        k = -k;
    }
    if (k > 0 && x >= 0 && y >= 0) {//Квадрат в первой четверти и точка в первой четверти
        if ((x == k && y <= k) || (x <= k && y == k) || (x == 0 && y <= k) || (x <= k && y == 0)) {
            cout << "Minimal distance is 0";
        } else if (x < k && y < k) {//Точка в квадрате
            ld distance1 = k - x;
            ld distance2 = k - y;
            ld distance3 = k;
            ld distance4 = y;
            ld distance5 = min(distance4, distance3);
            ld distance6 = min(distance1, distance2);
            ld distance = min(distance5, distance6);
            cout << "Minimal distance is " << distance;
        } else if (x >= k || y >= k) {
            if ((x >= k && y > k) || (x > k && y >= k)) {//точка в углу квадрата
                cout << "The dot is outside the square. Minimal distance is "
                     << sqrt(pow(x - k, 2) + pow(k - y, 2));
                return 0;
            } else if (x < k && y > k) {//Точка сверху квадрата
                cout << "The dot is outside the square. Minimal distance is " << y - k;
            } else if (x > k && y < k) {//Точка справа квадрата
                cout << "The dot is outside the square. Minimal distance is " << x - k;
            }
        }
    } else if ((x < 0 && y < 0 && k > 0) || (x > 0 && y > 0 && k < 0)) {//Квадрат и точка в разных четвертях
        x = -x;
        y = -y;
        k = -k;
        cout << "The dot is outside the square. Minimal distance is "
             << sqrt(pow(x, 2) + pow(y, 2));
        return 0;
    }

    if (k < 0) {//квадрат в 3 точка в 4
        swap(x, y);
        x = -x;
        y = -y;
        k = abs(k);
    }
    if (x >= 0 && y <= 0) {
        swap(x, y);
    }
    if (y > k) {
        cout << "The dot is outside the square. Minimal distance is "
             << sqrt(pow(x, 2) + pow(k - y, 2));

    } else if (x > k) {
        cout << "The dot is outside the square. Minimal distance is "
             << sqrt(pow(x - k, 2) + pow(y, 2));
    } else if (y < 0) {
        cout << "The dot is outside the square. Minimal distance is " << abs(y);
    } else if (x < 0) {
        cout << "The dot is outside the square. Minimal distance is " << abs(x);
    }
    return 0;
}

