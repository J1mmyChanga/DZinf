#include <iostream>
using namespace std;

int main() {
    int n, j, m = 2;
    cout << "Введите число, до которого необходимо найти все простые числа:" << endl;
    cin >> n;
    int mas[n];

    for (int i = 0; i < n + 1; i++) { // формирование массива
        mas[i] = i;
    }
    mas[1] = 0;

    while (m < n) {
        if (mas[m] != 0) {
            j = m * 2;
            while (j < n) {
                mas[j] = 0;
                j = j + m;
            }
        }
        m += 1;
    }

    cout << "Простые числа от 2 до " << n << ": ";
    for (int i = 0; i < n + 1; i++) {
        if (mas[i] != 0) {cout << mas[i] << " ";}
    }
}