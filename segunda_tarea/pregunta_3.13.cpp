#include <iostream>
#include <string>
using namespace std;

class Cuenta {
public:
    Cuenta(string nombreCuenta, int saldoInicial)
        : nombre{nombreCuenta} {

        if (saldoInicial > 0) {
            saldo = saldoInicial;
        }
    }

    void depositar(int montoDeposito) {
        if (montoDeposito > 0) {
            saldo += montoDeposito;
        }
    }

    void retirar(int montoRetiro) {
        if (montoRetiro > 0 && montoRetiro <= saldo) {
            saldo -= montoRetiro;
        }
    }

    int obtenerSaldo() const {
        return saldo;
    }

    void establecerNombre(string nombreCuenta) {
        nombre = nombreCuenta;
    }

    string obtenerNombre() const {
        return nombre;
    }

private:
    string nombre;
    int saldo{0};
};

void mostrarCuenta(Cuenta cuentaAMostrar) {
    cout << "el nombre de la cuenta es: " << cuentaAMostrar.obtenerNombre()<< "el saldo de la cuenta es: " << cuentaAMostrar.obtenerSaldo() << endl;
}

int main() {
    Cuenta cuenta1{"juan perez", 50};
    Cuenta cuenta2{"maria garcia", -7};
    int montoDeposito, montoRetiro;

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    cout << "ingrese el monto a depositar en la cuenta 1: "; cin >> montoDeposito;
    cout << "depositando " << montoDeposito << " en la cuenta 1." << endl;
    cuenta1.depositar(montoDeposito);

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    cout << "ingrese el monto a depositar en la cuenta 2: "; cin >> montoDeposito;
    cout << "depositando " << montoDeposito << " en la cuenta 2." << endl;
    cuenta2.depositar(montoDeposito);

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    cout << "ingrese el monto a retirar de la cuenta 1: "; cin >> montoRetiro;
    cout << "retirando " << montoRetiro << " de la cuenta 1." << endl;
    cuenta1.retirar(montoRetiro);

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    cout << "ingrese el monto a retirar de la cuenta 2: "; cin >> montoRetiro;
    cout << "retirando " << montoRetiro << " de la cuenta 2." << endl;
    cuenta2.retirar(montoRetiro);

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    return 0;
}