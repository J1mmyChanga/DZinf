#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A[10];
    for (int i = 0; i <= 10; i++) A[i] = i;
    for (int i = 0; i <= 10; i++) {
        A[10 - i] = A[i];
        A[i] = A[10 - i];
    }
    cout << A;
    for (int n: A) {
        cout << n << " ";
    }
}
