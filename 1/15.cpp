#include <iostream> 
using namespace std; 
 
int main() {
    string time, lamp, curt; 
    cout << "����� ᥩ�� �६� ��⮪?" << endl << "(��ਠ��� �⢥�: '����', '����')" << endl; 
    cin >> time;
    cout << "����祭� �� ᥩ�� �����?" << endl << "(��ਠ��� �⢥�: '��', '���')" << endl; 
    cin >> lamp;
    cout << "���������� �� ����?" << endl << "(��ਠ��� �⢥�: '��', '���')" << endl; 
    cin >> curt;
    if ((time == "����" and curt == "��") or lamp == "��") {
        cout << "� ������ ᢥ⫮!";
    }
    else {
        cout << "� ������ ⥬�� :(";
    }
}