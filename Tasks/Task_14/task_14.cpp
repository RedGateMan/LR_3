//Лабораторная 2, задача 14. Выполнена: Чижов Е.С.

/*
Даны действительные числа a, b, c, x ,y. Выяснить, пройдёт ли
кирпич с ребрами a, b, c в прямоугольное отверстие со стороны x и y.
просовывать кирпич в отверстие разрешается только так, чтобы каждое из его
было параллельно или перпендикулярно каждый из сторон отверстия.
*/
#include <iostream>

using namespace std;

int task_14() {
    long double a, b, c, x, y;
    cout << "Enter brick's parameters (a, b, c)" << endl;
    cin >> a >> b >> c;
    cout << "Enter hole parameters (x, y)" << endl;
    cin >> x >> y;

    long double brickHeight, brickWidth;
    if (a <= b && a <= c) {// Вычисление минимальных параметров кирпича
        brickHeight = a;
        brickWidth = min(b, c);
    } else if (b <= a && b <= c) {
        brickHeight = b;
        brickWidth = min(a, c);
    } else {
        brickHeight = c;
        brickWidth = min(b, a);
    }

    long double holeHeight, holeWidth;
    if (x <= y) { //Вычисление параметров отверстия
        holeHeight = x;
        holeWidth = y;
    } else {
        holeHeight = y;
        holeWidth = x;
    }

    if (holeHeight >= brickHeight &&
        holeWidth >= brickWidth) {//Получение ответа: пройдет ли кирпич в отверстие, или нет
        cout << "YES!";
    } else {
        cout << "NO!";
    }
    return 0;
}