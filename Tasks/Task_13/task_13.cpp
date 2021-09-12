//Лабораторная 2, задача 13. Выполнена: Чижов Е.С.

/*
Сможет ли шар радиуса R пройти в ромбообразное отверстие
стороной P и острым углом Q?
*/
#include <iostream>
#include <cmath>
using namespace std;

int task_13(){
    long double R, P, Q;
    cout << "Enter R = ";
    cin >> R;
    cout << "Enter P = ";
    cin >> P;
    cout << "Enter angle in degrees Q = ";
    cin >> Q;
    long double D = sin(Q) * P;
    if (D >= 2 * R){
        cout << "YES!";
    } else {
        cout << "NO!";
    }
    return 0;
}