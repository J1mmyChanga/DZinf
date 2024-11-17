#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float S, p, n, m, r;
    cout << "Введите сумму займа S, процентную ставку p и количество лет n:" << endl;
    cin >> S >> p >> n;
    if (S > 0 and p < 100 and p > 0 and n > 0) {
        r = p / 100.0;
        m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
        cout << "Месячная выплата составляет: " << m;
    }
    else if (p == 0) {
        cout << "Месячная выплата составляет: " << S / (12.0 * n);
    }
    else {
        cout << "Введённые данные некорректны." << endl;
    }
    return 0;
}