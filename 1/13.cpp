#include <iostream>
using namespace std;

int main() {
    cout << "������� ���祭�� b � c: " << endl;
    float b, c;
    cin >> b >> c;
    if (b == 0 and c == 0) {
        cout << "x - ��" << endl;
    }
    else if (b != 0 and c == 0) {
        cout << "x = 0" << endl; 
    }
    else if (b == 0 and c != 0) {
        cout << "��� �襭��" << endl;  
    }
    else {
        cout << "x = " << -c/b << endl;
    }
}