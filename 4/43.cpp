#include <iostream>
#include <cmath>
using namespace std;

float triangle() {
    float a, h;
    cout << "������ ��஭� ��㣮�쭨�� a � ����� h, �஢����� � ���:\n";
    cin >> a >> h;
    if (a < 0 or h < 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��㣮�쭨��: ";
    return a * h * 0.5;
}

float circle() {
    float r, pi;
    pi = floor(M_PI * 100) / 100;
    cout << "������ ࠤ��� ��㣠:\n";
    cin >> r;
    if (r < 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��㣠 r: ";
    return pi * pow(r, 2);
}

float rectangle() {
    float a, b;
    cout << "������ ��� ��஭� ��אַ㣮�쭨�� a � b:\n";
    cin >> a >> b;
    if (a < 0 or b < 0) {
        cout << "������ ����� �����४��";
        return 0;
    }
    cout << "���頤� ��אַ㣮�쭨�� ";
    return a * b;
}

int main() {
    int ans;
    cout << "���᫨� ���頤� ��㣮�쭨��, ��㣠 ��� ��אַ㣮�쭨��?\n";
    cout << "(��ਠ��� �⢥�: ��㣮�쭨� - 1, ��� - 2, ��אַ㣮�쭨� - 3)\n";
    cin >> ans;
    switch (ans) {
        case 1: cout << triangle(); break;
        case 2: cout << circle(); break;
        case 3: cout << rectangle(); break;
        default: cout << "�����४�� �⢥�"; break;
    }
    return 0;
}