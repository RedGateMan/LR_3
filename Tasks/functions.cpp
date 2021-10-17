//
// Created by Егор on 16.10.2021.
//
#include <iostream>
#include <iomanip>
#include "functions.h"

long double fabs(long double x) {
    if (x < 0)
        return -x;
    return x;
}

long long readInt(long long l, long long r) {
    long double xLF;
    while ((scanf("%llf", &xLF)) == 0 || xLF < l || fabs(xLF - (long long) (xLF)) >= 1e-9 || xLF > r) {
        //std::cerr << xLF << '\n';
        std::cerr << "Invalid expression type!\n" << "Enter integer digit!\n";
        while (fgetc(stdin) != '\n');
    }
    return (long long) xLF;
}

long double readFloat(long double l, long double r) {
    long double x;
    while ((scanf("%llf", &x)) == 0 || (x > r && fabs(r - x) >= 1e-9) || (x < l && fabs(x - l) >= 1e-9)) {
        std::cerr << "Invalid expression type!\n" << "Enter real digit!\n";
        while (fgetc(stdin) != '\n');
    }
    return x;
}

long double myPow(long double a, long long b) {
    long double asave = a;
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else
        for (int i = 1; i < b; i++) {
            a *= asave;
        }
    return a;
}

unsigned long long myFact(long long x) {///Максимально вводимое число, которое влезает в ячейку память -- 20!
    unsigned long long result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}
