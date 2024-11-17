#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float m, S, r, m_formula, n, p = 0.1;
    cout << "Введите сумму займа S, месячную выплату m и количество лет n:" << endl;
    cin >> S >> m >> n;
    if (m == S / 12.0) {
        cout << "Процентная ставка составляет: 0%";
        return 0;
    }
    if (S > 0 and m > 0 and n > 0) {
        while (p < 100) {
            r = p / 100.0;
            m_formula = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
            p = p + 0.1;
            if (m_formula == m) {
                cout << "Процентная ставка составляет: " << p << "%";
                return 0;
            }
        }
    }
    else {
        cout << "Введённые данные некорректны." << endl;
    }
    return 0;
}