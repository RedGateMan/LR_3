//Лабораторная 3, задача 9. Выполнена: Чижов Е.С.

/*
Вычислить сумму
*/
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int task_9() {
    long long N;
    cin >> N;
    long double a[N];
    long double sum = 0;
    for(int i = 0; i < N; i++){
        //srand(time(nullptr));
        a[i] = rand() % 1000;
        sum += pow(2,i) * pow(-1,i) * a[i];
    }
    for(int i = 0; i < N; i++){
        cout << a[i] << endl;
    }
    cout << sum;
    return 0;
}