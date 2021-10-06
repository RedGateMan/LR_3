//Лабораторная 2, задача 6. Выполнена: Чижов Е.С.

/*
Составить программу используя переключатель switch:
*/
#include <iostream>

using namespace std;


int task_6() {
    int N;
    double a, b, c;
    cout << "Enter N(case number 2, 3, 7, 56):";
    cin >> N;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    switch (N) {
        case 2:
            cout << b * c - a * a;
            break;
        case 3:
            cout << a - b * c;
            break;
        case 7:
            cout << a * a + c;
            break;
        case 56:
            cout << b * c;
            break;
        default:
            cout << (a + b) * (a + b) * (a + b);
            break;
    }
    return 0;
}