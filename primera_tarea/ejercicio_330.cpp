/*cree una aplicación de calculadora de IMC que lea el peso del usuario en libras y la altura en 
pulgadas (o, si lo prefiere, el peso del usuario en kilogramos y la altura en metros), 
luego calcule y muestre el índice de masa corporal del usuario. Además, la aplicación debe mostrar 
la siguiente información del departamento de salud y servicios humanos/institutos nacionales de salud. 
El usuario puede evaluar su IMC:
*/

#include <iostream>
using namespace std;

int main() {
    float peso, altura, bmi;
    int opcion;

    cout << "***** Bienvenido a la calculadora de BMI *****" << endl;
    cout << "1. Libras y Pulgadas" << endl;
    cout << "2. Kilogramos y Metros" << endl;
    cout << "Ingresa tu elección 1 o 2 : ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingresa tu peso en libras: ";
        cin >> peso;
        cout << "ingresa tu altura en pulgadas: ";
        cin >> altura;
        bmi = (peso * 703) / (altura * altura);
    }
    else if (opcion == 2) {
        cout << "ingrersa tu peso en kilogramos: ";
        cin >> peso;
        cout << "Ingresa tu altura en metros: ";
        cin >> altura;
        bmi = peso / (altura * altura);
    }
    else {
        cout << "opcion invalida" << endl;
        return 0;
    }

    cout << "Tu BMI es: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Tienes bajo peso" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Tienes un peso normal" << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Tienes sobrepeso" << endl;
    }
    else {
        cout << "Tienes obesidad" << endl;
    }

    return 0;
}