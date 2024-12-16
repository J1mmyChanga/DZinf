#include <iostream>
#include <cmath>
using namespace std;

bool check_if_sys_is_corr (string, int);
int convert_to_ten(string, int);
string convert_to_custom(int, int);

int main() {
    int start_sys, end_sys;
    string num;
    while (true) {
        cout << "Введите начальную систему счисления и систему счисления, в которую необходимо перевести число:" << endl;
        cin >> start_sys >> end_sys;
        cout << "Введите число, которое необходимо конвертировать:" << endl;
        cin >> num;
        if (not check_if_sys_is_corr(num, start_sys)) {
            cout << "Неверная начальная система счисления!" << endl;
            continue;
        }
        if(end_sys == 10) {
            cout << convert_to_ten(num, start_sys) << endl;
            continue;
        }
        cout << convert_to_custom(convert_to_ten(num, start_sys), end_sys) << endl;
    }
}

bool check_if_sys_is_corr (string num, int start_sys) {
    string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < num.length(); i++) {
        if (not isdigit(num[i])) {
            int id = alph.find(toupper(num[i]));
            if (id >= start_sys) {
                return false;
            }
        }
    }
    return true;
}

int convert_to_ten(string num, int start_sys) {
    string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int res = 0;
    for (int i = 0; i < num.length(); i++) {
        res = res + alph.find(toupper(num[i])) * pow(start_sys, (num.length() - 1 - i));
    }
    return res;
}

string convert_to_custom(int num, int end_sys) {
    string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string res = "";
    while (num / end_sys != 0) {
        res = alph[num % end_sys] + res;
        // cout << num / end_sys << " " << alph[num % end_sys] << " " << " " << res << endl;
        num = num / end_sys;
    }
    if (num % end_sys != 0) {
        res = alph[num % end_sys] + res;
    }
    return res;
}