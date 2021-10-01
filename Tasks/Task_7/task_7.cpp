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
                        cout << "x belongs R";//"x є R"
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
            cout << "You've chosen 2-nd type of expression ax^4 + bx^3 + cx^2 + bx + a = 0 " << endl;
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
                        //0 = 0
                        cout << "x belongs R";//"x є R"
                        return 0;
                    } else {
                        //cx^2 = 0
                        cout << "x = 0";
                    }
                } else {
                    if (c == 0) {
                        //bx^3 + bx = 0
                        cout << "x = 0" << endl;
                        return 0;
                    } else {
                        //bx^3 + cx^2 + bx = 0
                        cout << "x1 = 0";
                        long double discriminant = pow(c, 2) - 4 * pow(b, 2);
                        if (discriminant > 0) {
                            cout << "x2 = " << (-c - sqrt(discriminant)) / (2 * b) << endl << "x3 = "
                                 << (-c + sqrt(discriminant)) / (2 * b);
                        } else if (discriminant == 0) {
                            cout << "x2 = " << -c / (2 * b);
                        }
                    }
                }
            } else {
                if (b == 0) {
                    if (c == 0) {
                        //ax^4 + a = 0
                        cout << "There are no soluetions for the expression";
                    } else {
                        //ax^4 + cx^2 + a = 0
                        a = a;
                        b = c;
                        c = a;
                        if (a == 0) {
                            if (b == 0) {
                                if (c == 0) {
                                    //A = 0, B = 0, C = 0
                                    cout << "x belongs R";//"x є R"
                                    return 0;
                                } else {
                                    cout << "No solutions";
                                    return 0;
                                }
                            } else if (c < 0) {
                                cout << "Solutions" << endl << "x1 = " << sqrt(-c / b) << endl << "x2 = "
                                     << -sqrt(-c / b);
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
                                    cout << "Solutions" << endl << "x1 = " << sqrt(t1) << " " << "x2 = " << -sqrt(t1)
                                         << endl
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
                    }
                } else {
                    if (c == 0) {
                        //ax^4 + bx^3 + bx + a = 0
                        //at^2 + bt - 2a = 0
                        //t = x + 1 / x
                        long double discriminant = pow(b, 2) - 8 * pow(a, 2);
                        if (discriminant > 0) {
                            long double t1 = (-b - sqrt(discriminant)) / (2 * a);
                            long double t2 = (-b + sqrt(discriminant)) / (2 * a);
                            //x2 - xt1 + 1 = 0
                            long double discriminant1 = pow(t1, 2) - 4;
                            if (discriminant1 > 0) {
                                long double x1 = (t1 - sqrt(discriminant1)) / 2;
                                long double x2 = (t1 + sqrt(discriminant1)) / 2;
                                if (x1 != 0 && x2 != 0) {
                                    cout << "x1 = " << x1 << " " << "x2 = " << x2;
                                } else if (x1 != 0) {
                                    cout << "x1 = " << x1;
                                } else if (x2 != 0) {
                                    cout << "x2 = " << x2;
                                }
                            }
                            //x2 - xt2 + 1 = 0
                            long double discriminant2 = pow(t2, 2) - 4;
                            if (discriminant2 > 0) {
                                long double x1 = (t2 - sqrt(discriminant1)) / 2;
                                long double x2 = (t2 + sqrt(discriminant1)) / 2;
                                if (x1 != 0 && x2 != 0) {
                                    cout << "x3 = " << x1 << " " << "x4 = " << x2;
                                } else if (x1 != 0) {
                                    cout << "x3 = " << x1;
                                } else if (x2 != 0) {
                                    cout << "x4 = " << x2;
                                } else {
                                    cout << "There are no solutions for the expression";
                                }
                            }
                        }
                    } else {
                        //ax^4 + bx^3 + cx^2 + bx + a = 0
                        //at^2 + bt + (c - 2a) = 0
                        //t = x + 1 / x
                        long double discriminant = pow(b, 2) - 4 * a * (c - 2 * a);
                        if (discriminant > 0) {
                            //at^2 + bt + c - 2a = 0
                            long double t1 = (-b - sqrt(discriminant)) / (2 * a);
                            long double discriminant1 = pow(t1, 2) - 4 * a * (c - 2 * a);
                            if (discriminant1 > 0) {
                                long double x1 = (-t1 - sqrt(discriminant1)) / 2;
                                long double x2 = (-t1 + sqrt(discriminant1)) / 2;
                                if (x1 != 0 && x2 != 0) {
                                    cout << "x1 = " << x1 << " " << "x2 = " << x2;
                                } else if (x1 != 0) {
                                    cout << "x1 = " << x1;
                                } else if (x2 != 0) {
                                    cout << "x2 = " << x2;
                                }
                            }
                        }
                        long double t2 = (-b + sqrt(discriminant)) / (2 * a);
                        long double discriminant2 = pow(t2, 2) - 4 * a * (c - 2 * a);
                        if (discriminant2 > 0) {
                            long double x1 = (-t2 - sqrt(discriminant2)) / 2;
                            long double x2 = (-t2 + sqrt(discriminant2)) / 2;
                            if (x1 != 0 && x2 != 0) {
                                cout << "x1 = " << x1 << " " << "x2 = " << x2;
                            } else if (x1 != 0) {
                                cout << "x1 = " << x1;
                            } else if (x2 != 0) {
                                cout << "x2 = " << x2;
                            }
                        }
                    }
                }
            }
            break;
        }
        case 3: {
            double b, c;
            cout << "You've chosen 3-rd type of expression x^3 + px + q = 0 " << endl;
            cout << "Enter coefficients: " << endl;
            cout << "p = ";
            cin >> b;
            cout << "q = ";
            cin >> c;
            if (b == 0) {
                if (c == 0) {
                    //x^3 = 0
                    cout << "x1 = 0";
                } else {
                    //x^3 + q = 0
                    cout << "x1 = " << pow(-c, 1 / 3);
                }
            } else {
                if (c == 0) {
                    //x^3 + bx = 0
                    cout << "x1 = 0";
                    cout << "x2 = " << pow(-b, 1 / 3);
                } else {
                    //x^3 + bx + c = 0
                    //a = 0
                    long double Q = (-3 * b) / 9;
                    long double R = (27 * c) / 54;
                    long double S = pow(Q, 3) - pow(R, 2);
                    if (S > 0) {
                        long double phi = (1. / 3) * acos(R / sqrt(pow(Q, 3)));
                        cout << "x1 = " << -2 * sqrt(Q) * cos(phi) << endl
                             << "x2 = " << -2 * sqrt(Q) * cos(phi + (2. / 3 * M_PI)) << endl
                             << "x3 = " << -2 * sqrt(Q) * cos(phi - (2. / 3 * M_PI));
                    } else { //Рассмотреть при S < 0 и равно 0
                        long double l = -1e6, r = 1e6, mid;
                        while (r - l >= 1e-5) {
                            mid = (r + l) / 2;
                            if (pow(mid, 3) + b * mid + c < 0) {
                                l = mid;
                            } else {
                                r = mid;
                            }
                        }
                        cout << "x1 = " << mid;
                    }
                }
            }
            break;
        }
        default:
            cout << "Vadim, choose correct type of expression!";
            break;
    }
    return 0;
}