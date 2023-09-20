#include <iostream>
using namespace std;

int obtenertriangular(int n) {
    return (n * (n + 1)) / 2;
}

int obtenerdivisores(int n) {
    int cantidad = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cantidad++;
            if (i != n / i) {
                cantidad++;
            }
        }
    }
    return cantidad;
}

int encontrar_primer_triangular(int cantidad) {
    int numero = 1;
    while (true) {
        int numero_triangular = obtenertriangular(numero);
        int cantidad_divisores = obtenerdivisores(numero_triangular);
        if (cantidad_divisores > cantidad) {
            return numero_triangular;
        }
        numero++;
    }
}

int main() {
    int cantidad_divisores = 500;
    int numerotriangular = encontrar_primer_triangular(cantidad_divisores);
    cout << "El primer numero triangular es: "<< numerotriangular << endl;

    return 0;
}






























































