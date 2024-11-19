#include <iostream>
using namespace std;

int main() {
    int star_count_x = 8, star_count_y = 6, def_line_length = 40;
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < def_line_length; j++) {
            if (star_count_y > 0 and star_count_x > 0) {
                cout << "*";
                star_count_x--;
                if (star_count_x == 0) {
                    star_count_y--;
                }
                continue;
            }
            cout << "_";
            if (j == def_line_length - 1) {
                cout << endl;
                if (star_count_y > 0) {
                    star_count_x = 8;
                }
            }
        }
    }
    return 0;
}