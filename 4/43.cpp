#include <iostream>
#include <cmath>
using namespace std;

int triangle() {
    float a, h;
    cout << "Введите сторону треугольника a и высоту h, проведённую к ней:\n";
    cin >> a >> h;
    if (a <= 0 or h <= 0) {
        cout << "Введённые данные некорректны";
        return 0;
    }
    cout << "Площадь треугольника: " << a * h * 0.5;
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
