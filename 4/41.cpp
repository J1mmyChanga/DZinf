#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float summ;
    string num;
    srand(time(0));
    ofstream fout("41.txt");
    for (int i = 0; i < 10; i++) {
        fout << rand() << endl;
    }
    ifstream fin("41.txt");
    while (getline(fin, num)) {
        summ = summ + stof(num);
    }
    fin.close();
    cout << summ << endl;
}