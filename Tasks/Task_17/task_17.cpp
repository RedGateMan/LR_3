//Лабораторная 2, задача 17 Выполнена: Чижов Е.С.

/*
Есть два стола :D В прямоугольной комнате W на H стоит
прямоугольный стол стороны которого параллельны сторонам комнаты. Нижний
левый угол стола находится в точке (x1, y1), а верхний правый в точке (x2, y2).
Вы хотите поставить в эту комнату ещё один прямоугольный стол с шириной w
и высотой h так, чтобы сторона, соответствующая ширине стола, была
параллельна стороне комнаты, соответствующей её ширине. (столы могут
касаться друг друга, но не могут иметь общей площади).
///
На какое минимальное расстояние нужно сдвинуть первый стол так,
чтобы в комнату можно было поставить второй стол? Поворачивать столы - запрещено.
В рассчётах используется Декартова (от Рене Декарт) система координат.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int task_17() {
    long double roomWidth, roomHeight;
    cout << "Enter width of the room: W = ";
    cin >> roomWidth;
    cout << "Enter height of the room: H = ";
    cin >> roomHeight;
    long double firstTableX1, firstTableY1, firstTableX2, firstTableY2;
    cout << "Enter X1 = ";//Координаты нижнего левого угла первого стола
    cin >> firstTableX1;
    cout << "Enter Y1 = ";
    cin >> firstTableY1;
    cout << "Enter X2 = ";//Координаты правого верхнего угла стола
    cin >> firstTableX2;
    cout << "Enter Y2 = ";
    cin >> firstTableY2;
    long double firstTableWidth, firstTableHeight;//Рассчет ширины и высоты первого стола
    firstTableWidth = abs(firstTableX2 - firstTableX1);
    firstTableHeight = abs(firstTableY2 - firstTableY1);
    long double secondTableWidth, secondTableHeight;//Ширина и высота второго стола
    cout << "Enter width of the second table: w = ";
    cin >> secondTableWidth;
    cout << "Enter height of the second table: h = ";
    cin >> secondTableHeight;
    if (secondTableWidth + firstTableWidth <= roomWidth || secondTableHeight + firstTableHeight <= roomHeight) {
        long double moveUp = 0, moveDown = 0, moveLeft = 0, moveRight = 0;
        if (secondTableWidth > firstTableX1) {
            moveRight = secondTableWidth - firstTableX1;
        }
        if (roomWidth - secondTableWidth < firstTableX2) {
            moveLeft = firstTableX2 - (roomWidth - secondTableWidth);
        }
        if (secondTableHeight > firstTableY1) {
            moveUp = secondTableHeight - firstTableY1;
        }
        if (roomHeight - secondTableHeight < firstTableY2) {
            moveDown = firstTableY2 - (roomHeight - secondTableHeight);
        }
        cout << fixed << setprecision(6);
        if ((firstTableX1 - moveLeft < 0) && (firstTableY1 - moveDown < 0) && (firstTableX2 + moveRight > roomWidth) &&
            (firstTableY2 + moveUp > roomHeight)) {//Если по итогу сдвигов стол выходит за рамки комнаты
            cout << -1;
        }
        if (firstTableY1 - moveDown < 0) {
            moveDown += roomHeight;
        }
        if (firstTableX2 + moveRight > roomWidth) {
            moveRight += roomWidth;
        }
        if (firstTableY2 + moveUp > roomHeight) {
            moveUp += roomHeight;
        }
        if (firstTableX1 - moveLeft < 0) {
            moveLeft += roomWidth;
        }
        cout << min(min(moveUp, moveDown), min(moveRight, moveLeft));
    } else {
        cout << -1;
    }
    return 0;
}