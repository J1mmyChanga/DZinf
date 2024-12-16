#include <iostream>
using namespace std;

int main() {
    int a, b, a1, b1;
    cout << "Введите два числа, для которых ищется НОД:" << endl;
    cin >> a >> b;
    a1 = a;
    b1 = b;

    while (a != 0 and b != 0) {
        if (a > b) {a = a % b;}
        else {b = b % a;}
    }
    cout << "НОД (делением):" << a + b << endl;

    while (a1 != b1) {
        if (a1 > b1) {a1 = a1 - b1;}
        else {b1 = b1 - a1;}
    }
    cout << "НОД (вычитанием):" << a1;
}