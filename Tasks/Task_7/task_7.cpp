//Лабораторная 2, задача 7. Выполнена: Чижов Е.С.

/*
Составить программу для решения уравнений трёх видов:
7.1 ax^4 + bx^2 + c = 0;
7.2 ax^4 + bx^3 + cx^2 + bx + a = 0
7.3 x^3 + px + q = 0
*/
#include <iostream>
#include <cmath>

using namespace std;

int task_7() {
    int expressionType;
    cout << "Choose type of the expression (1-3):";
    cin >> expressionType;
    switch (expressionType) {
        case 1: {
            double a, b, c;
            cout << "You've chosen 1-st type of expression ax^4 + bx^2 + c = 0 " << endl;
            cout << "Enter coefficients: " << endl;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "c = ";
            cin >> c;
            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        //A = 0, B = 0, C = 0
                        cout << "x belongs R";
                        return 0;
                    } else {
                        cout << "No solutions";
                        return 0;
                    }
                } else if (c < 0) {
                    cout << "Solutions" << endl <<"x1 = " << sqrt(-c / b) << endl << "x2 = " << -sqrt(-c / b);
                    return 0;
                } else {
                    cout << "No solutions";
                    return 0;
                }
            }
            break;
        }
        case 2: {
            cout << "You've chosen 2-nf type of expression ax^4 + bx^3 + cx^2 + bx + a = 0 " << endl;
            long double a, b, c;
            cout << "Enter coefficients: " << endl;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "c = ";
            cin >> c;
            long double D = pow(b, 2) - 4 * a * (c - 2 * a);
            bool flag1, flag2;
            long double t1, t2;
            t1 = (-b - sqrt(D)) / (2 * a);
            t2 = (-b + sqrt(D)) / (2 * a);
            if (D < 0) {
                cout << "There are no solutions for the expression :(";
                return 1;
            } else {
                long double D1 = pow(t1, 2) - 4 * a * (c - 2 * a);
                if (D1 < 0) {
                    cout << "There are no solutions for the expression 1 :(" << endl;
                    flag1 = false;
                } else {
                    long double x1 = (t1 - sqrt(pow(t1, 2) - 4)) / 2;
                    long double x2 = (t1 + sqrt(pow(t1, 2) - 4)) / 2;
                    cout << "x1 = " << x1 << " " << "x2 = " << x2 << endl;
                    flag1 = true;
                }
                long double D2 = pow(t2, 2) - 4 * a * (c - 2 * a);
                if (D2 < 0) {
                    cout << "There are no solutions for the expression 2 :(" << endl;
                    flag2 = false;
                } else {
                    long double x3 = (t2 - sqrt(pow(t2, 2) - 4)) / 2;
                    long double x4 = (t2 + sqrt(pow(t2, 2) - 4)) / 2;
                    cout << "x3 = " << x3 << " " << "x4 = " << x4 << endl;
                    flag2 = true;
                }
                if (flag1 == 0 && flag2 == 0) {
                    cout << "No solutions";
                }
            }
            break;
        }
        case 3: {
            break;
        }
        default:
            cout << "Vadim, choose correct type of expression!";
            break;
    }
    return 0;
}