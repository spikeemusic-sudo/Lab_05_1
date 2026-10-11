// Lab_05_1.cpp
// Фащевський Богдан
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 28

#include <iostream>
#include <cmath>

using namespace std;

double f(const double a); // прототип

int main()
{
    double x;

    cout << "x = "; cin >> x;

    double c = (f(x) + f(1 + f(x))) / (1 + pow(f(1 + pow(f(x), 2)), 2));

    cout << "c = " << c << endl;

    return 0;
}

double f(const double a) // визначення
{
    return sin(a) * sin(a) + a * a + 1;
}