#include <iostream>
using namespace std;

int main() {
    cout << "������ ��� �᫠ a � b: \n";
    float a, b;
    cin >> a >> b;
    cout << "�㬬� �ᥫ: " << a + b << endl;
    cout << "�������� �ᥫ: " << a - b << endl;
    cout << "�ந�������� �ᥫ: " << a * b << endl;
    if (b != 0) {
        cout << "���⭮� �ᥫ: " << a / b << endl;
    }
    else {
        cout << "���⭮� �������� �� 㤠����";
    }
    return 0;
}