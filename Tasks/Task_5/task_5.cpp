//Лабораторная 2, задача 5. Выполнена: Чижов Е.С.

/*
Составить программу используя условный оператор if:
*/
#include <iostream>
using namespace std;

int task_5(){
    long double Z, a, b, c, d;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << "Enter d:";
    cin >> d;
    if (c >= d && a < d){
        Z = a + b / c;
    }
    else if (c < d && a >= d){
        Z = a - b / c;
    }
    else{
        Z = 0;
    }
    cout << Z;
    return 0;
}
