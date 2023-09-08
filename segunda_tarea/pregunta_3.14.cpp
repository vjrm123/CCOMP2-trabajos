#include <iostream>
#include <string>
using namespace std;

class Cuenta {
public:
    Cuenta(unsigned int numeroCuenta, string nombre, string apellido, double saldoInicial)
        : numeroCuenta{numeroCuenta}, nombre{nombre}, apellido{apellido}, saldo{saldoInicial} {}

private:
    unsigned int numeroCuenta;
    string nombre;
    string apellido;
    double saldo;
};

int main() {
    Cuenta miCuenta{123456, "juan", "erez", 1000.0};

    return 0;
}