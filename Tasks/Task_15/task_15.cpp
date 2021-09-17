//Лабораторная 2, задача 15. Выполнена: Чижов Е.С.

/*
Для дробного числа К напечатать фразу "мы нашли К грибов в
лесу", согласовав окончание слова "гриб" с числом К.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int task_15(){
    system("chcp 65001");
    SetConsoleOutputCP(CP_UTF8);
    long double K;
    cout << "Введите чило К:";
    cin >> K;
    long long integerAmountOfMushrooms;
    integerAmountOfMushrooms = K;
    if (integerAmountOfMushrooms != K){
        cout << "мы нашли " << K << " гриба в лесу";
    } else {
        integerAmountOfMushrooms %= 100;
        if(integerAmountOfMushrooms > 20) {
            integerAmountOfMushrooms %= 10;
        }

        if (integerAmountOfMushrooms == 0) {
            cout << "мы нашли " << K << " грибов в лесу";
        }
        if(integerAmountOfMushrooms == 1){
            cout << "мы нашли " << K << " гриб в лесу";
        }
        if(integerAmountOfMushrooms < 5 && integerAmountOfMushrooms != 1){
            cout << "мы нашли " << K << " гриба в лесу";
        }
        if(integerAmountOfMushrooms > 4){
            cout << "мы нашли " << K << " грибов в лесу";
        }
    }
    return 0;
}