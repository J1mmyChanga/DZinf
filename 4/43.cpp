#include <iostream>
#include <cmath>
using namespace std;

int triangle() {
    float a, h;
    cout << "������ ��஭� ��㣮�쭨�� a � ����� h, �஢����� � ���:\n";
    cin >> a >> h;
    if (a <= 0 or h <= 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��㣮�쭨��: " << a * h * 0.5;
    return 0;
}

int circle() {
    float r, pi;
    pi = floor(M_PI * 100) / 100;
    cout << "������ ࠤ��� ��㣠:\n";
    cin >> r;
    if (r < 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��㣠: " << pi * pow(r, 2);
    return 0;
}

int rectangle() {
    float a, b;
    cout << "������ ��� ��஭� ��אַ㣮�쭨�� a � b:\n";
    cin >> a >> b;
    if (a <= 0 or b <= 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��אַ㣮�쭨��: " << a * b;
    return 0;
}

int main() {
    int ans;
    cout << "���᫨� ���頤� ��㣮�쭨��, ��㣠 ��� ��אַ㣮�쭨��?\n";
    cout << "(��ਠ��� �⢥�: ��㣮�쭨� - 1, ��� - 2, ��אַ㣮�쭨� - 3)\n";
    cin >> ans;
    switch (ans) {
        case 1: triangle(); break;
        case 2: circle(); break;
        case 3: rectangle(); break;
        default: cout << "�����४�� �⢥�"; break;
    }
    return 0;
}
