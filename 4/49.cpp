#include <iostream>
using namespace std;

bool check_if_sys_is_corr (float, int);

int main() {
    int start_sys, end_sys;
    float num;
    while (true) {
        cout << "Введите начальную систему счисления и систему счисления, в которую необходимо перевести число:" << endl;
        cin >> start_sys >> end_sys;
        cout << "Введите число, которое необходимо конвертировать:" << endl;
        cin >> num;
        if (not check_if_sys_is_corr(num, start_sys)) {
            cout << "Неверная значальная система счисления" << endl;
            break;
        }
        cout << "Все ок";
        break;
    }
}

bool check_if_sys_is_corr (float num, int count_sys) {
    string str_num = to_string(num);
    string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < str_num.length(); i++) {
        if (not isdigit(str_num[i])) {
            int id = alph.find(str_num[i]);
            if (id >= count_sys) {
                return false;
            }
        }
    }
    return true;
}