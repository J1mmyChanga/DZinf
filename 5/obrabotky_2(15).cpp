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
    string word;
    cout << "Input the word you search:" << endl;
    cin >> word;
    word = lower_line(word);

    string line;
    int counter = 0;
    ifstream fin("file.txt");
    while (getline(fin, line)) {
        line = lower_line(line);
        line = del_el('.', line);
        line = del_el(',', line);
        line = del_el('-', line); //и так далее со всеми элементами, которые есть в тексте
        cout << line << endl;

        vector<string> v;
        int start, end;
        start = end = 0;
        char dl = ' ';
        while ((start = line.find_first_not_of(dl, end))
               != string::npos) {
            end = line.find(dl, start);
            v.push_back(line.substr(start, end - start));
               }

        counter = counter + count(v.begin(), v.end(), word);
    }
    fin.close();
    cout << "Ammount of words " << word << ": " << counter;
}