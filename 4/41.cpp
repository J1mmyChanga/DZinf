#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    float summ = 0, num_in;
    string num_sum;
    ofstream fout("41.txt");
    for (int i = 0; i < 10; i++) {
        cin >> num_in;
        fout << num_in << endl;
    }
    fout.close();
    ifstream fin("41.txt");
    while (getline(fin, num_sum)) {
        summ = summ + stof(num_sum);
    }
    fin.close();
    cout << summ << endl;
}