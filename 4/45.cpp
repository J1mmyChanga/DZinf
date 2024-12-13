#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    float inner_k = 15; // уменьшение сжимает к оси Oy
    float outer_k = 5; // уменьшение сжимает к оси Ox
    int accuracy = 1;
    int x = 120; // max_x
    int y = outer_k * 2 + 1; // max_y

    vector<string> graph(y, string(x, ' '));

    graph[y / 2] = string(x, '-'); // Ox

    int zero = y / 2;

    for (int i = 0; i < x; i++) { // точки графика
        graph[round((outer_k * sin(i / inner_k) + zero) * accuracy) / accuracy][i] = '*';
    }


    for (auto s : graph) {
        cout << s << '\n';
    }
}