/*(enteros más grandes y más pequeños) escriba un programa que en cinco números enteros determine e imprima los números enteros más grandes y más pequeños del grupo.
Utilice sólo las técnicas de programación que aprendió en este capítulo.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int max, min;
    
    cout << "Ingresa cinco números enteros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    if (num5 > max) {
        max = num5;
    }
    
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 < min) {
        min = num5;
    }
    
    cout << "El número más grande es: " << max << endl;
    cout << "El número más pequeño es: " << min << endl;
    
    return 0;
}