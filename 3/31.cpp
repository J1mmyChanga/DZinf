#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float S, p, n, m, r;
    cout << "������ �㬬� ����� S, ��業��� �⠢�� p � ������⢮ ��� n:" << endl;
    cin >> S >> p >> n;
    if (S > 0 and p < 100 and p > 0 and n > 0) {
        r = p / 100.0;
        m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
        cout << "����筠� �믫�� ��⠢���: " << m;
    }
    else if (p == 0) {
        cout << "����筠� �믫�� ��⠢���: " << S / (12.0 * n);
    }
    else {
        cout << "������ ����� �����४��." << endl;
    }
    return 0;
}