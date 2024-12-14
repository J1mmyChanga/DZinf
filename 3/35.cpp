#include <iostream>

using namespace std;

int main() {
    string s = "qwertyuioapasdfgbhjklzaxcvbncm";
    cout << s << endl;
    for (int j = 0; j < 30; j++)
    for (int i = 0; i < 30; i++) {
        if (i == 29) {
            continue;
        }
        if (s[i] > s[i+1]) {
            // cout << s[i] << " " << s[i+1] << endl;
            swap(s[i], s[i+1]);
        }
    }
    cout << s;
    return 0;
}