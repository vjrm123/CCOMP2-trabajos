#include <iostream>

using namespace std;

int suma_cuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int cuadrado_suma(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma * suma;
}

int main() {
    int n = 100;
    int diferencia = cuadrado_suma(n) - suma_cuadrados(n);
    cout << "La diferencia de la suma es: " << diferencia << endl;
    return 0;
}