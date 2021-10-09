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

int task_8() {
    int a[7];
    for (int i = 1; i < (int) 1e6; i++) {
        int isave = i;
        int counter = 0;
        while (isave > 0) {
            a[counter] = isave % 10;
            isave /= 10;
            counter++;
        }
        int sum = 0;
        for(int j = 0; j < counter; j++){
            sum += pow(a[j], counter);
        }
        if(sum == i){
            cout << i << endl;
        }
    }
    return 0;
}