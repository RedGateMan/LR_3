//Лабораторная 2, задача 16 Выполнена: Чижов Е.С.

/*
Введены два числа. Выведите их НОД и НОК.
*/

#include <iostream>

using namespace std;

int task_16() {
    long long firstNumber, secondNumber, temp1, temp2;
    cout << "Enter first number = ";
    cin >> firstNumber;
    temp1 = firstNumber;
    cout << "Enter second number = ";
    cin >> secondNumber;
    temp2 = secondNumber;
    while (firstNumber != secondNumber) {
        if (firstNumber > secondNumber)
            firstNumber -= secondNumber;
        else
            secondNumber -= firstNumber;
    }
    cout << "Greatest common divisor = " << firstNumber << endl;
    cout << "Least common multiple = " << (temp1 * temp2) / firstNumber << endl;
    return 0;
}