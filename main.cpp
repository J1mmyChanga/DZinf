#include <iostream>
#include <vector>
using namespace std;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 5, 6, 6};
    vector<int> v1(5, 8);
    vector<int> v2;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    printV(v);
    printV(v1);
    printV(v2);
}