//Лабораторная 3, задача 7. Выполнена: Чижов Е.С.

/*
 * 7. Найти двухзначное число, обладающее тем свойством, что куб
 * суммы его цифр равен квадрату самого числа.
*/
#include <iostream>
#include <cmath>

using namespace std;

int task_7() {
    short e;
    short d;
    //cout << 27;
    for (short i = 10; i < 100; i++) {
        e = i % 10;
        d = i / 10;
        if(pow(e + d,3) == pow(i,2)){
            cout << i;
        }
    }
    return 0;
}