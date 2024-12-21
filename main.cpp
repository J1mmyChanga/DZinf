#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int occurrences = 0;
    string::size_type pos = 0;
    string s = "FooBarFooBarFoo";
    string target = "Foo";
    while ((pos = s.find(target, pos )) != string::npos) {
        ++ occurrences;
        pos += target.length();
    }
    cout << occurrences << endl;
}