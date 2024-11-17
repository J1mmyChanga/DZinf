#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float V, S, r, R, h, l, pi;
    cout << "Введите малый радиус r, больший радиус R и высоту конуса h:" << endl;
    cin >> r >> R >> h;
    if (r > 0 and R > 0 and h > 0) {
        pi = floor(M_PI * 100) / 100; // привожу к виду 3.14
        l = sqrt(pow(h, 2) + pow(R - r, 2)); // по т Пифагора нахожу образующую
        V = (1.0 / 3) * pi * h * (pow(R, 2) + R * r + pow(r, 2)); // единицу сделал дробной, чтобы результат деления был тоже дробный
        S = pi * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << "Объём усечённого конуса: " << V << endl;
        cout << "Площадь поверхности усечённого конуса: " << S << endl;
    }
    else {
        cout << "Введённые данные некорректны." << endl;
    }
    return 0;
}