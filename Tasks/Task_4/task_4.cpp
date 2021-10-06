//Лабораторная 3, задача 4. Выполнена: Чижов Е.С.

/*
 * Вычислить сумму четных чисел на промежутке от 1 до числа,
 * введенного пользователем:
 * 4.1 С использованием цикла;
 * 4.2 Без использования цикла.
*/
#include <iostream>

using namespace std;


int task_4() {
    long long N, sum = 0, expressionType;
    cout << "1) Cycle" << endl << "2) Formula" << endl;
    cin >> expressionType;
    switch(expressionType){
        case 1: {
            cin >>N;
            for (int i = 1; i <= N; i++) {
                if (i % 2 == 0) {
                    sum += i;
                }
            }
            cout << sum;
            break;
        }
        case 2:{
            cin >> N;
            if(N % 2 == 0){
                cout << N*(2+N) / 4 ;
            }else{
                cout << (N-1)*(2+N-1) / 4;
            }
            break;
        }
        default:
            break;
    }
    return 0;
}
// 1 2 3 4 5 6 7 8