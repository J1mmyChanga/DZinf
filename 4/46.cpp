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
    int cur, prev, prev2 = -1, count_of_reps = 1;
    string num, symb;
    cout << "Введите римское число:" << endl;
    cin >> num;
    int numbers[num.length()];
    for (int i = 0; i < num.length(); i++) {
        numbers[i] = converter(num[i]);
    }
    for (int i = 0; i < num.length(); i++) {
        if (numbers[i] == numbers[i+2] and numbers[i+1] > numbers[i]) { // проверка на IXI и тп без пересчёта числа(например IXI = 9 1, останется 1 10 1)
            cout << "Такое число существовать не может!";
            return 0;
        }
    }
    for (int i = 1; i < num.length(); i++) {
        prev = numbers[i-1];
        cur = numbers[i];
        if (i >= 2) {
            prev2 = numbers[i-2];
            if (cur == prev2 and prev > cur) {
                cout << "Такое число существовать не может!";
                return 0; // проверка на IXI и тп с пересчётом
            }
        }
        int n = cur - prev;
        if (n == 0) {
            count_of_reps++;
            if (cur == 5 or cur == 50 or cur == 500 or count_of_reps > 3) { // нельзя чтобы VV или LL или DD шли подряд
                cout << "Такое число существовать не может!";
                return 0;
            }
        }
        if (n > 0) {
            count_of_reps = 1;
            if ((n != 4 and n != 9 and n != 45 and n != 90 and n != 450 and n != 900 and n != 40 and n != 400) or (prev == prev2)) {
                cout << "Такое число существовать не может!";
                return 0; // IV, IX, VL, XC, LD, CM, XL, CD - можно
            }
            numbers[i-1] = 0;
            numbers[i] = cur - prev;
        }
        if (n < 0) {
            count_of_reps = 1;
        }
    }
    cout << accumulate(numbers, numbers + num.length(), 0);
}
