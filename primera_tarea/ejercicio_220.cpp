/*(diámetro, circunferencia y área de un círculo) escriba un programa que lea el radio de un círculo como un número
entero e imprima el diámetro, la circunferencia y el arco del círculo. utilice el valor constante 3,14159 para pi.
haga todos los cálculos en declaraciones de salida [nota: en este capítulo, analizamos las constantes y variables 
enteramente enteras. en el capítulo 4 analizamos los números de punto flotante, es decir, valores que tienen puntos decimales]*/

#include <iostream>
using namespace std;

int main() {
    int radio;
    const float pi = 3.1415;
    cout << "Ingrese el radio del circulo como un numero entero: ";
    cin >> radio;

    int diametro = 2 * radio;
    float circunferencia = 2 * pi * radio;
    float area = pi * radio * radio;

    cout << "El diametro del circulo es: " << diametro << endl;
    cout << "La circunferencia del circulo es: " << circunferencia << endl;
    cout << "El area del circulo es: " << area << endl;

    return 0;
}