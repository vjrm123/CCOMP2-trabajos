#include <iostream>
using namespace std;

int main(){
    int suma = 1000;
    for (int a = 1; a <= suma / 3; a++) {
        for (int b = a + 1; b <= suma / 2; b++) {
            int c = suma - a - b;
            if (a * a + b * b == c * c) {
                cout << "los numeros son: " << a << ", " << b << ", " << c << endl;
                cout << "el pruducto es:  " << a * b * c << endl;
                return 0;
            }
        }
    }
    cout << "no existe el triplete que la suma sea 1000: " << suma << endl;
    return 0;
}