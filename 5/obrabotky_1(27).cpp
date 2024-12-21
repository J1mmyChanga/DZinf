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
    string symbol;
    cout << "Input the symbol, that need to be counted: " << endl;
    getline(cin, symbol);
    if (symbol.length() > 1) {
        cout << "Incorrect input";
        return 0;
    }

    ofstream fout("file.txt");
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
        // counter = counter + count(line.begin(), line.end(), symbol);
        //
        string::size_type pos = 0;
        while ((pos = line.find(symbol, pos )) != string::npos) {
            ++counter;
            pos += symbol.length();
        }
    }
    cout << "Amount of '" << symbol << "' symbols: " << counter;
    fin.close();
}