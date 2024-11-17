#include <iostream>
using namespace std;

int main() {
    cout << "Введите два числа a и b: \n";
    float a, b;
    cin >> a >> b;
    cout << "Сумма чисел: " << a + b << endl;
    cout << "Разность чисел: " << a - b << endl;
    cout << "Произведение чисел: " << a * b << endl;
    if (b != 0) {
        cout << "Частное чисел: " << a / b << endl;
    }
    else {
        cout << "Частное подсчитать не удалось";
    }
    return 0;
}