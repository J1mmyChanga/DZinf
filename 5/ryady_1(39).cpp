#include <iostream>
using namespace std;

int main() {
    int n, line = 1, counter = 0;
    cout << "Введите длину массива n:" << endl;
    cin >> n;
    cout << "Введите массив из " << n << " элементов:";


    float mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    for (int i = 1; i < n; i++) {
        if (mas[i] > mas[i-1]) {line++;}
        else {
            if (line > 1) {counter++;}
            line = 1;
        }
    }
    if (line > 1) {counter++;}

    cout << "Количество возрастающих последовательностей: " << counter;

    // for (int i = 0; i < n; i++) {
    //     cout << mas[i] << " ";
    // }
    // 20
    // -123 -23 2323 4353 30 50 -5345 -4346 1 2 3 4 5 0 -43 4335354 783 323 0 23233
}