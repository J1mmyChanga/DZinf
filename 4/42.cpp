#include <iostream>
using namespace std;

int sign(float x) {
    if (x > 0) return 1;
    if (x == 0) return 0;
    return -1;
}

bool is_number(string line) {
    for (int i = 0; i < line.length(); i++) {
        if (not isdigit(line[i]) and line[i] != '-') return false;
    }
    return true;
}

int main() {
    string x;
    cin >> x;
    if (is_number(x)) {
        cout << sign(stof(x));
    }
    else {
        cout << "Неверные данные";
    }
    return 0;
}
