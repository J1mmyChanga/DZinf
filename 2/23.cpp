#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, b, z;
    cout << "������ x, y � b:" << endl;
    cin >> x >> y >> b;
    if (b - x >= 0 and b - y > 0){
        z = log(b - y) * sqrt(b - x);
        cout << "z = " << z;
    }
    else {
        cout << "��� ������ ��।������";
    }
}