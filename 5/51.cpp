#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "������ ��� �᫠, ��� ������ ����� ���:" << endl;
    cin >> a >> b;

    // while (a != 0 and b != 0) {
    //     if (a > b) {a = a % b;}
    //     else {b = b % a;}
    // }
    // cout << "��� (��������):" << a + b;

    while (a != b) {
        if (a > b) {a = a - b;}
        else {b = b - a;}
    }
    cout << "��� (���⠭���):" << a;
}