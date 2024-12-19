#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string lower_line(string line) {
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    return line;
}

int main() {
    char symbol;
    cout << "Input the symbol, that need to be counted: " << endl;
    cin >> symbol;

    ofstream fout("file1.txt");
    fout << "Keith recently came back from a trip to Chicago, Illinois. This midwestern metropolis is found along the shore of Lake Michigan." << endl;
    fout << "During his visit, Keith spent a lot of time exploring the city to visit important landmarks and monuments." << endl;
    fout << "Keith loves baseball, and he made sure to take a visit to Wrigley Field. Not only did he take a tour of this spectacular stadium, but he also got to watch a Chicago Cubs game." << endl;
    fout << "In the stadium, Keith and the other fans cheered for the Cubs. Keith was happy that the Cubs won with a score of 5-4." << endl;
    fout.close();

    string line;
    int counter = 0;
    ifstream fin("file.txt");
    while (getline(fin, line)) {
        line = lower_line(line);
        vector<char> mas(line.begin(), line.end());
        counter = counter + count(mas.begin(), mas.end(), symbol);
    }
    cout << "Amount of " << symbol << " symbols: " << counter;
    fin.close();
}