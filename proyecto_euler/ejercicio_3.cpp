#include <iostream>

using namespace std;

int Mfactorprimo(long long numero) {

    long long factor = 2;
    while (numero > 1) {
        if (numero % factor == 0) {
            numero = numero / factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    long long numero = 13195;

    cout << "el mayor factor primo es: " << Mfactorprimo(numero) << endl;

    return 0;
}