#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    float inner_k = 15; // уменьшение увеличивает амплитуду
    float outer_k = 5; // уменьшение увеличивает период
    int accuracy = 1;
    int x = 120; // max_x
    int y = outer_k * 2 + 1; // max_y

    vector<string> graph(y, string(x, ' ')); // двумерный массив из пробелов

    graph[y / 2] = string(x, '-'); // средняя строка - Ox из тире

    int zero = y / 2;

    for (int i = 0; i < x; i++) { // вычисляет значение функции для каждой точки i на оси ох
        graph[round((outer_k * sin(i / inner_k) + zero) * accuracy) / accuracy][i] = '*'; // присвоение координате массива graph значения y
    }


    for (auto s : graph) {
        cout << s << '\n'; // вывод массива построчно
    }
}