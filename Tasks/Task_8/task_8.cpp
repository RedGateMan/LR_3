//Лабораторная 2, задача 8. Выполнена: Чижов Е.С.
//Вариант 11
/*
Вычислить значение y в зависимости от выбранной функции f(x),
аргумент определяется из поставленного условия. Возможные значения
функции f(x): 2x, x^3, x/3 (выбор осуществляется используя оператор switch).
Предусмотреть вывод сообщений, показывающих, при каком условии и с какой
функцией производились вычисления y.
*/
#include <iostream>
#include <cmath>
using namespace std;

int task_8(){
    int marker;
    long double x = 0;
    cout << "Choose type of f(x)";
    cin >> marker;
    long double function = 0;
    switch(marker){
        case 1:
            function = 2 * x;
            cout << "You've chosen f(x) = 2x" << endl;
            break;
        case 2:
            function = pow(x, 3);
            cout << "You've chosen f(x) = x^3" << endl;
            break;
        case 3:
            function = x / 3;
            cout << "You've chosen f(x) = x/3" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
    }
    long double y, z, a, b;
    cout << "Enter Z = ";
    cin >> z;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    if (z > 0){
        x = 1 / (pow(z,2) + 2 * z);
        cout << "X = 1/(Z^2 + 2*Z)" << endl;
    } else if (z <= 0){
        x = 1 - pow(z,3);
        cout << "X = 1 - Z^3" << endl;
    }
    y = (2.5 * exp(-3 * x) - 4 * b * pow(x, 2)) / (log(fabs(x)) + function);
    cout << "The answer is: " << y;
    return 0;
}