//Лабораторная 2, задача 4. Выполнена: Чижов Е.С.

/*
Дан квадрат с вершинами в точках (0, 0), (0, k), (k, k), (k, 0).
Вычислите наименьшее из расстояний от точки с координатами (x, y), лежащей
внутри квадрата, до сторон данного квадрата. Координаты вещественные. Если
точка лежит за пределами квадрата, выведите сообщение об этом и расстояние
до ближайшей стороны квадрата.
*/
#include <iostream>
typedef long double ld;
using namespace std;

int task_4() {
    ld k, x, y;
    cout << "Enter k = ";
    cin >> k;
    cout << "Enter (x,y)";
    cin >> x >> y;
    if (x < k && y < k && x >= 0 && y >= 0) {//Рассчёт расстояний до всех сторон, при условии, что точка находится в квалрате
        ld distance1 = x;
        ld distance2 = y;
        ld distance3 = k - x;
        ld distance4 = k - y;
        ld distance5 = min(distance1, distance2);
        ld distance6 = min(distance3, distance4);
        ld distance = min(distance5, distance6);
        cout << "Minimal distance is " << distance;
    } else if (x == 0 || y == 0){
        cout << "Minimal distance is 0";
    } else if (k > 0 && (x > k || y > k)){
        ld distance1 = abs(x - k);
        ld distance2 = abs(y - k);
        ld distance = min(distance1, distance2);
        cout << "The dot is outside of the square " << endl <<  "Minimal distance is " << distance;
    } else if (x > k && y > k && x < 0 && y < 0){
        ld distance1 = abs(k - x);
        ld distance2 = abs(k - y);
        ld distance3 = -x;
        ld distance4 = -y;
        ld distance5 = min(distance1, distance2);
        ld distance6 = min(distance3, distance4);
        ld distance = min(distance5, distance6);
        cout << "Minimal distance is " << distance;
    } else if (x < k || y < k){
        ld distance1 = abs(k - x);
        ld distance2 = abs(k - y);
        ld distance3 = abs(x);
        ld distance4 = abs(y);
        ld distance5 = min(distance1, distance2);
        ld distance6 = min(distance3, distance4);
        ld distance = min(distance5, distance6);
        cout << "The dot is outside of the square " << endl <<  "Minimal distance is " << distance;
    }else {
        ld distance1 = abs(k - x);
        ld distance2 = abs(k - y);
        ld distance3 = abs(x);
        ld distance4 = abs(y);
        ld distance5 = min(distance1, distance2);
        ld distance6 = min(distance3, distance4);
        ld distance = min(distance5, distance6);
        cout << "The dot is outside of the square " << endl <<  "Minimal distance is " << distance;
    }
    return 0;
}

