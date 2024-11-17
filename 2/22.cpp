#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float w, a, x;
    cout << "Введите a и x:" << endl;
    cin >> a >> x;
    if (abs(x) < 1) {
        if (abs(x) != 0) {
            w = a * log(abs(x));
            cout << "w = " << w;
        }
        else {
            cout << "Вне области определений";
        }
    }
    else {
        if (a - pow(x, 2) >= 0) {
            w = sqrt(a - pow(x, 2));
            cout << "w = " << w;
        }
        else {
            cout << "Вне области определений";
        }
    }
}