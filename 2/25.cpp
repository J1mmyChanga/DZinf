#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x = -4.0, y;
    while (x < 4.5) {
        if (x != 1) {
            y = pow(x, 2) - 2 * x + 2 / (x - 1);
            cout << "��� x = " << x << ": y = " << y << endl;
        }
        else {
            cout << "x = " << x << " ��� ������ ��।������" << endl;
        }
        x += 0.5;
    }
}