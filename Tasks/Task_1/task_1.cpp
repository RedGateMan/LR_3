//Лабораторная 3, задача 1. Выполнена: Чижов Е.С.

/*
 * Искользуя WHILE вычислить значение многочлена записанного в общем виде
*/
#include <iostream>

using namespace std;


int task_1() {
    int a, b, i = 1;
    double result = 0;
    while (i < 30) {
        if (i % 2 != 0) {
            a = i;
        } else{
            a = i/2;
        }
        if(i % 2 != 0){
            b = i * i;
        }else{
            b = i * i * i;
        }
        result+= (a - b) * (a - b);
        i++;
    }
    cout << "Result: " << result;
    return 0;
}