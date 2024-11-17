#include <iostream> 
#include <cmath> 
using namespace std;  
  
int main() {  
    cout << "Введите переменные a, b и c: " << endl; 
    float a, b, c;  
    cin >> a >> b >> c;  
    if (a == 0) {  
        if (b == 0 and c == 0) {  
            cout << "x - любое" << endl;  
        }  
        else if (b != 0 and c == 0) {  
            cout << "x = 0" << endl;   
        }  
        else if (b == 0 and c != 0) {  
            cout << "нет решений" << endl;    
        }  
        else {  
            cout << "x = " << -c/b << endl;  
        }  
    } 
    else { 
        float disc = pow(b, 2) - 4 * a * c; 
        if (disc > 0) { 
            float x1, x2; 
            x1 = (-b + sqrt(disc)) / (2 * a); 
            x2 = (-b - sqrt(disc)) / (2 * a); 
            cout << "x1 = " << x1 << endl; 
            cout << "x2 = " << x2 << endl; 
        } 
        else if (disc == 0) { 
            float x = -b / (2 * a); 
            cout << "x = " << x << endl; 
        } 
        else { 
            cout << "нет решений"; 
        } 
    } 
} 
// 2 3 1 - d > 0 
// 1 6 9 - d = 0 
// 2 1 2 - d < 0