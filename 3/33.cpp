#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char cash[50];
    ofstream fout;
    fout.open("33.txt");
    // ofstream fout("33.txt");
    fout << "awdwdadwadadwa";
    fout.close();
    ifstream fin("33.txt");
    fin.getline(cash, 100);
    cout << cash;
    return 0;
}