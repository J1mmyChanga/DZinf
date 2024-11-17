#include <iostream>
using namespace std;

int main() {
    cout << "Ввведите значения b и c: " << endl;
    float b, c;
    cin >> b >> c;
    if (b == 0 and c == 0) {
        cout << "x - любое" << endl;
    }
    else if (b != 0 and c == 0) {
        cout << "x = 0" << endl; 
    }
    else if (b == 0 and c != 0) {
        cout << "нет решений" << endl;  
    }
    else {
        cout << "x = " << -c/b << endl;
    }
}