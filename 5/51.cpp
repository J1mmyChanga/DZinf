#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа, для которых ищется НОД:" << endl;
    cin >> a >> b;

    // while (a != 0 and b != 0) {
    //     if (a > b) {a = a % b;}
    //     else {b = b % a;}
    // }
    // cout << "НОД (делением):" << a + b;

    while (a != b) {
        if (a > b) {a = a - b;}
        else {b = b - a;}
    }
    cout << "НОД (вычитанием):" << a;
}