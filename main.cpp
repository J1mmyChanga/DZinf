#include <iostream>

using namespace std;

int s = 0;

int gen(int i, int n, int m, int b, int c) {
    cout << s << " ";
    if (i < n) {
        s = (m * s + b) % c;
        return gen(i + 1, n, m, b, c);
    }
    return 0;
}


int main() {
    int n;
    string a;

    cout << "Input the amount of numbers to generate: ";
    cin >> n;

    cout << "Do you want to generate big or small numbers s / b? ";
    cin >> a;

    if (a == "s") {
        cout << "\nGenerated numbers:\n\n";
        gen(0, n, 37, 3, 64);
        cout << "\n\n";
    }
    else if (a == "b") {
        cout << "\nGenerated numbers:\n\n";
        gen(0, n, 25173, 13849, 65537);
        cout << "\n\n";
    }
    else {
        main();
    }

}