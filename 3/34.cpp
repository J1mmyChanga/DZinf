#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;
    // char cash[50];
    ofstream fout("34.txt");
    fout << "abo123ba228\n";
    fout << "djun567ga33ri8800k22\n";
    fout << "adawdawd\n";
    fout << "j1mmy4ch44ch4";
    fout.close();

    ifstream fin("34.txt");
    // fin.getline(cash, 50);
    // cout << cash;
    while (getline(fin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (isdigit(line[i])) {
                cout << line[i];
            }
        }
        cout << endl;
    }
    fin.close();
    return 0;
}