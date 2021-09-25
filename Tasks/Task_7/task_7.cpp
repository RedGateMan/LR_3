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
                    cout << "Solutions" << endl << "x1 = " << sqrt(-c / b) << endl << "x2 = " << -sqrt(-c / b);
                    return 0;
                } else {
                    cout << "There are no solutins for the expression";
                    return 0;
                }
            } else {
                long double discriminant = pow(b, 2) - 4 * a * c;
                if (discriminant > 0) {
                    long double t1 = (-b - sqrt(discriminant)) / (2 * a);
                    long double t2 = (-b + sqrt(discriminant)) / (2 * a);
                    if (t1 >= 0 && t2 >= 0) {
                        cout << "Solutions" << endl << "x1 = " << sqrt(t1) << " " << "x2 = " << -sqrt(t1) << endl
                             << "x3 = " << sqrt(t2) << " " << "x4 = " << -sqrt(t2) << endl;
                    } else if (t1 >= 0) {
                        cout << "Solutions" << endl << "x1 = " << sqrt(t1) << endl << "x2 = " << -sqrt(t1);
                    } else if (t2 >= 0) {
                        cout << "Solutions" << endl << "x1 = " << sqrt(t2) << endl << "x2 = " << -sqrt(t2);
                    } else {
                        cout << "There are no solutions for the expression";
                    }
                } else if (discriminant == 0) {
                    long double t = -b / (2 * a);
                    if (t >= 0) {
                        cout << "Solutions" << endl << "x1 = " << sqrt(t) << " " << "x2 = " << -sqrt(t);
                    } else {
                        cout << "There are no solutions for the expression";
                    }
                } else {
                    cout << "There are no solutions for the expression";
                }
            }
            break;
        }
        case 2: {
            double a, b, c;
            cout << "You've chosen 1-st type of expression ax^4 + bx^2 + c = 0 " << endl;
            cout << "Enter coefficients: " << endl;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "c = ";
            cin >> c;
            if(a == 0){
                if(b == 0){
                    if (c == 0) {
                        //A = 0, B = 0, C = 0
                        cout << "x belongs R";
                        return 0;
                    } else {
                        cout << "No solutions";
                        return 0;
                    }
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