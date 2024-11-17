#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float N;
    cout << "Введите число N:" << endl;
    cin >> N;
    if (N >= 0) {
        N = ceil(N);
        for(int i = 0; i < 10; i++) {
            cout << N << endl;
            N++;
        }
    }
    else {
        cout << "Введённые данные некорректны." << endl;
    }
}