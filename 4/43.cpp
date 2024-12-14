#include <iostream>
#include <cmath>
using namespace std;

int triangle() {
    float a, b, c;
    cout << "Введите три стороны треугольника:\n";
    cin >> a >> b >> c;
    if (a <= 0 or b <= 0 or c <= 0) {
        cout << "Введённые данные некорректны";
        return 0;
    }
    float p = (a + b + c) / 2;
    cout << "Площадь треугольника: " << sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}

int circle() {
    float r, pi;
    pi = floor(M_PI * 100) / 100;
    cout << "Введите радиус круга:\n";
    cin >> r;
    if (r < 0) {
        cout << "Введённые данные некорректны";
        return 0;
    }
    cout << "Площадь круга: " << pi * pow(r, 2);
    return 0;
}

int rectangle() {
    float a, b;
    cout << "Введите две стороны прямоугольника a и b:\n";
    cin >> a >> b;
    if (a <= 0 or b <= 0) {
        cout << "Введённые данные некорректны";
        return 0;
    }
    cout << "Площадь прямоугольника: " << a * b;
    return 0;
}

int main() {
    int ans;
    cout << "Вычислим площадь треугольника, круга или прямоугольника?\n";
    cout << "(Варианты ответа: треугольник - 1, круг - 2, прямоугольник - 3)\n";
    cin >> ans;
    switch (ans) {
        case 1: triangle(); break;
        case 2: circle(); break;
        case 3: rectangle(); break;
        default: cout << "Некорректный ответ"; break;
    }
    return 0;
}
