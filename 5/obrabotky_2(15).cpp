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

string del_el(char symb, string line) {
    while (count(line.begin(), line.end(), symb) != 0) {
        line.replace(line.find(symb), 1, 1, ' ');
    }
    return line;
}

int main() {
    string line;
    ifstream fin("file.txt");
    while (getline(fin, line)) {
        line = lower_line(line);
        line = del_el('.', line);
        line = del_el(',', line);
        line = del_el('-', line); //и так далее со всеми элементами, которые есть в тексте
        cout << line << endl;
    }

    string word;
    cout << "Input the word you search:" << endl;
    cin >> word;
    fin.close();
}