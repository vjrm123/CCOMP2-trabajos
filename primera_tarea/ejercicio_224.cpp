/*(par o impar) escriba un programa que lea dos números enteros y determine e imprima si cada número entero, 
así como la suma de los dos números enteros, es un número impar.
[pista. use el resto de uno cuando lo divida por 2.]*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    cout << "Ingrese dos números enteros: ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << "El primer número es " << (num1 % 2 == 0 ? "par" : "impar") <<endl;
    cout << "El segundo número es " << (num2 % 2 == 0 ? "par" : "impar") <<endl;
    cout << "La suma de los dos numeros ingresado es: " <<sum<<endl; 

    return 0;
}