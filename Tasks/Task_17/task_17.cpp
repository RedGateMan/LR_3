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

/*
Tests:
111111111/////////////////////
Input{
    8 5
    2 1 7 4
    4 2
    }
Output{
    1.000000000
    }
222222222/////////////////////
Input{
    5 4
    2 2 5 4
    3 3
    }
Output{
    -1
    }
333333333/////////////////////
Input{
    1 8
    0 3 1 6
    1 5
    }
Output{
    2.0000000000
    }
444444444/////////////////////
Input{
    8 1
    3 0 6 1
    5 1
    }
Output{
    2.0000000000
    }
555555555/////////////////////
 Input{
    8 10
    4 5 7 8
    8 5
    }
Output{
    0.0000000000
    }
*/
#include <iostream>
#include <iomanip>

using namespace std;

int task_17() {
    long double roomWidth, roomHeight;
    //cout << "Enter width of the room: W = ";
    cin >> roomWidth;
    //cout << "Enter height of the room: H = ";
    cin >> roomHeight;
    long double firstTableX1, firstTableY1, firstTableX2, firstTableY2;
    //cout << "Enter X1 = ";//Координаты нижнего левого угла первого стола
    cin >> firstTableX1;
    //cout << "Enter Y1 = ";
    cin >> firstTableY1;
    //cout << "Enter X2 = ";//Координаты правого верхнего угла стола
    cin >> firstTableX2;
    //cout << "Enter Y2 = ";
    cin >> firstTableY2;
    long double firstTableWidth, firstTableHeight;//Рассчет ширины и высоты первого стола
    firstTableWidth = abs(firstTableX2 - firstTableX1);
    firstTableHeight = abs(firstTableY2 - firstTableY1);
    long double secondTableWidth, secondTableHeight;//Ширина и высота второго стола
    //cout << "Enter width of the second table: w = ";
    cin >> secondTableWidth;
    //cout << "enter height of the second table: h = ";
    cin >> secondTableHeight;
    if (secondTableWidth + firstTableWidth <= roomWidth || secondTableHeight + firstTableHeight <= roomHeight) {
        long double counterX = 0, counterY = 0;//Переписать сдвиг до координаты второго стола сверху снизу слева и справа
        for (int i = 0; i < roomWidth + 1; ++i) {
            if (firstTableX1 < secondTableWidth) {
                firstTableX1++;
                counterX++;
            }
        }
        for (int i = 0; i < roomHeight + 1; ++i) {
            if (firstTableY1 < secondTableHeight) {
                firstTableY1++;
                counterY++;
            }
        }
        long double move;
        if (counterX + secondTableWidth > roomWidth) {
            move = counterY;
        } else if (counterY + secondTableHeight > roomHeight) {
            move = counterX;
        } else {
            move = min(counterX, counterY);
        }
        if (move + secondTableWidth < roomWidth || move + secondTableHeight < roomHeight) {
            cout << fixed << setprecision(10);
            cout << move << endl;//На тесте 3-4 выводит это значение, хотя ответ должен быть 2.0000000000
        } else {
            cout << -1;
        }
    } else
        cout << -1;
    return 0;
}