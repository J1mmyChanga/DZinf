#include <iostream>
using namespace std;

int func(int m, int b, int c, int num, int i, int stop) {
    int aboba;
    if (i == stop) {cout << endl; return 0;}
    aboba = (m * num + b) % c;
    cout << aboba << " " ;
    return func(m, b, c, (m * num + b) % c, i+1, stop);
}

int main() {
    int stop_num;
    cout << "До какого числа по счёту вы хотите вызвать рекурсию?" << endl;
    cin >> stop_num;
    cout << "1ый вариант: ";
    func(37, 3, 64, 0, 0, stop_num);
    cout << "2ой вариант: ";
    func(25173, 13849, 65537, 0, 0, stop_num);
}