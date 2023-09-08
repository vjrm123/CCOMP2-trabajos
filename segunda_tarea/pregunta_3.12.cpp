#include <iostream>
using namespace std;

class Fecha {
    private:
        int mes;
        int dia;
        int anio;
    public:
        Fecha(int dia, int mes, int anio)
            : dia{dia},mes{mes}, anio{anio} {
                if (mes < 1 || mes > 12) {
                    this->mes = 1;
                }
            }

        void setestablecerMes(int mes) {
            if (mes >= 1 && mes <= 12) {
                this->mes = mes;
            }
        }

        int getobtenerMes() const {
            return mes;
        }

        void setestablecerDia(int dia) {
            this->dia = dia;
        }

        int getobtenerDia() const {
            return dia;
        }

        void setestablecerAnio(int anio) {
            this->anio = anio;
        }

        int getobtenerAnio() const {
            return anio;
        }

        void mostrarFecha() const {
            cout << dia << "/" << mes << "/" << anio << endl;
        }
};

int main() {
    Fecha fecha{15, 12, 2023};

    fecha.mostrarFecha();

    fecha.setestablecerDia(1);
    fecha.setestablecerMes(23);
    fecha.setestablecerAnio(2022);

    fecha.mostrarFecha();

    return 0;
}




















































