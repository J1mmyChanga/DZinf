#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float V, S, r, R, h, l, pi;
    cout << "������ ���� ࠤ��� r, ����訩 ࠤ��� R � ����� ����� h:" << endl;
    cin >> r >> R >> h;
    if (r > 0 and R > 0 and h > 0) {
        pi = floor(M_PI * 100) / 100; // �ਢ��� � ���� 3.14
        l = sqrt(pow(h, 2) + pow(R - r, 2)); // �� � ��䠣�� ��宦� ��ࠧ�����
        V = (1.0 / 3) * pi * h * (pow(R, 2) + R * r + pow(r, 2)); // ������� ᤥ��� �஡���, �⮡� १���� ������� �� ⮦� �஡��
        S = pi * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << "���� ���񭭮�� �����: " << V << endl;
        cout << "���頤� �����孮�� ���񭭮�� �����: " << S << endl;
    }
    else {
        cout << "������ ����� �����४��." << endl;
    }
    return 0;
}