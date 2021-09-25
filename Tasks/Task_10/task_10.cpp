//Лабораторная 2, задача 10. Выполнена: Чижов Е.С.

/*
Из величин, определяемых выражениями a = sinx, b = cosx, c = ln|x|
при заданном х, определить и вывести на экран дисплея минимальное
значение.
*/
#include <iostream>

using namespace std;

double sinx(double x) {
    double n = x;
    double sum = 0.0;
    int i = 1;

    do {
        sum += n;
        n *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    } while (abs(n) > 0.000000001);

    return sum;
}

double cosx(double x) {
    double n = 1.0;
    double sum = 0.0;
    int i = 1;

    do {
        sum += n;
        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
        i++;
    } while (abs(n) > 0.000000001);

    return sum;
}

/**Хуйня нерабочая, в рот я ебал ваши блядские ряды, я не знаю математику,
нахуя давать блядские темы, котороые понять самому сложно, а на лекциях мы их будем проходить блять никогда,
а чтобы разобраться в этом говнище надо будет еще порешать примеры на ПЗ, но блять, у меня ведет Анисимов,
а это вообще пиздец полный блять, потому что он вообще нихуя не объясняет**/
double lnx(double x) {
    double sum = 0.0;
    int n = 1.0;
    double an = x;
    while (abs(an) > 0.000000001) {
        sum += an;
        ++n;
        an *= -x * (n - 1) / n;
    }
    return sum;
}

int task_10() {
    double x;
    cin >> x;
    cout << sinx(x) << " " << cosx(x) << " " << lnx(x);
    return 0;
}