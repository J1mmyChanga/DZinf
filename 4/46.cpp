#include <iostream>
#include <numeric>
using namespace std;

int converter(char line) {
    int number = 0;
    switch (line) {
        case 'I': number = 1; break;
        case 'V': number = 5; break;
        case 'X': number = 10; break;
        case 'L': number = 50; break;
        case 'C': number = 100; break;
        case 'D': number = 500; break;
        case 'M': number = 1000; break;
        default: cout << "Число введено неверно" << endl; return 0;
    }
    return number;
}

int main() {
    int cur, prev;
    string num, symb;
    cout << "Введите римское число:" << endl;
    cin >> num;
    int numbers[num.length()];
    for (int i = 0; i < num.length(); i++) {
        numbers[i] = converter(num[i]);
    }
    for (int i = 1; i < num.length(); i++) {
        prev = numbers[i-1];
        cur = numbers[i];
        if (cur > prev and prev != 1) {
            cout << "Такое число существовать не может!";
            return 0;
        }
        else if (cur > prev and prev == 1) {
            numbers[i-1] = 0;
            numbers[i] = cur - prev;
        }
    }
        cout << accumulate(numbers, numbers + num.length(), 0);
}
