//Лабораторная 2, задача 2. Выполнена: Чижов Е.С.

/*
Меньшее из двух значений переменных целого типа Х и Y заменить
нулём, а в случае их равенства - заменить нулями оба; наибольшее из трёх
различных значений переменных вещественного типа А, В и С уменьшите на K.
K вводится с клавиатуры.
*/
#include <iostream>
using namespace std;

int task_2() {
    int X, Y;
    double A, B, C, K;
    cout << "Enter X: ";
    cin >> X;
    cout << "Enter Y: ";
    cin >> Y;
    cout << "Enter K: ";
    cin >> K;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    cout << "Enter C:";
    cin >> C;
    if (X < Y){
        X = 0;
    }
    else if (Y < X){
        Y = 0;
    }
    else if (X == Y){
        X = Y =0;
    }
    cout << "X:" << X << " " << "Y:" <<  Y << endl;
    if (A > B && A > C ){
        A = A - K;
        cout << "A:" << A << endl;
        cout << "B:" << B << endl;
        cout << "C:" << C << endl;
    }
    else if (B > A && B > C){
        B = B - K;
        cout << "A:" << A << endl;
        cout << "B:" <<  B << endl;
        cout << "C:" << C << endl;
    }
    else if (C > B && C > A){
        C = C - K;
        cout << "A:" << A << endl;
        cout << "B:" << B << endl;
        cout << "C:" << C << endl;
    }
    return 0;
}

