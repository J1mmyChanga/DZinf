#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Введите длину массива n:" << endl;
    cin >> n;
    cout << "Введите массив из " << n << " элементов(рост детей в классе):";

    float x;
    vector<float> mas;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mas.push_back(x);
    }

    // while (cin >> x) {
    //     mas.push_back(x); // если не вводить кол-во значений
    // }

    int counter = 0;
    float av_height;
    av_height = accumulate(mas.begin(), mas.end(), 0.0) / n;
    for (int i = 0; i < mas.size(); i++) {
        if (mas[i] > av_height) {counter++;}
    }
    cout << "Количество учеников, чей рост превышает средний рост в классе: " << counter << endl;

    int ammount_of_reps;
    vector<float> used_height;
    for (int i = 0; i < mas.size(); i++) {
        ammount_of_reps = count(mas.begin(), mas.end(), mas[i]);
        if (ammount_of_reps > 1 and count(used_height.begin(), used_height.end(), mas[i]) == 0) {
            used_height.push_back(mas[i]);
            cout << "Количество пар одноклассников с одинаковым ростом " << mas[i] << " :" << ammount_of_reps * (ammount_of_reps - 1) / 2 << endl;
        }
    }

    // 12
    // 175 162 175 186 193 156 176.3 177 182 190 177 177
}