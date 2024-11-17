#include <iostream> 
using namespace std; 
 
int main() {
    string time, lamp, curt; 
    cout << "Какое сейчас время суток?" << endl << "(варианты ответа: 'ночь', 'день')" << endl; 
    cin >> time;
    cout << "Включена ли сейчас лампа?" << endl << "(варианты ответа: 'да', 'нет')" << endl; 
    cin >> lamp;
    cout << "Раздвинуты ли шторы?" << endl << "(варианты ответа: 'да', 'нет')" << endl; 
    cin >> curt;
    if ((time == "день" and curt == "да") or lamp == "да") {
        cout << "В комнате светло!";
    }
    else {
        cout << "В комнате темно :(";
    }
}