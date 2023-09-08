#include <string>
#include <iostream>
using namespace std;

class Factura {
    private:
        string numeroPieza;
        string descripcionPieza;
        int cantidad;
        int precioPorPieza;
        double tasaIVA;
        double tasaDescuento;
    public:
        Factura(string numeroPieza, string descripcionPieza, int cantidad, int precioPorPieza)
            : numeroPieza{numeroPieza}, descripcionPieza{descripcionPieza}, cantidad{cantidad}, precioPorPieza{precioPorPieza}, tasaIVA{0.20}, tasaDescuento{0} {}

        void establecerNumeroPieza(string numeroPieza) {
            this->numeroPieza = numeroPieza;
        }

        string obtenerNumeroPieza() const {
            return numeroPieza;
        }

        void establecerDescripcionPieza(string descripcionPieza) {
            this->descripcionPieza = descripcionPieza;
        }

        string obtenerDescripcionPieza() const {
            return descripcionPieza;
        }

        void establecerCantidad(int cantidad) {
            if (cantidad > 0) {
                this->cantidad = cantidad;
            }
        }

        int obtenerCantidad() const {
            return cantidad;
        }

        void establecerPrecioPorPieza(int precioPorPieza) {
            if (precioPorPieza > 0) {
                this->precioPorPieza = precioPorPieza;
            }
        }

        int obtenerPrecioPorPieza() const {
            return precioPorPieza;
        }

        void establecerTasaIVA(double tasaIVA) {
            if (tasaIVA >= 0 && tasaIVA <= 1) {
                this->tasaIVA = tasaIVA;
            }
        }

        double obtenerTasaIVA() const {
            return tasaIVA;
        }

        void establecerTasaDescuento(double tasaDescuento) {
            if (tasaDescuento >= 0 && tasaDescuento <= 1) {
                this->tasaDescuento = tasaDescuento;
            }
        }

        double obtenerTasaDescuento() const {
            return tasaDescuento;
        }

        double obtenerMontoFactura() const {
            double subtotal = cantidad * precioPorPieza;
            double montoIVA = subtotal * tasaIVA;
            double montoDescuento = subtotal * tasaDescuento;
            return subtotal + montoIVA - montoDescuento;
        }

};


int main(){
    Factura factura{"001", "tornillo", 100, 5};

    cout << "numero de pieza: " << factura.obtenerNumeroPieza() << endl;
    cout << "descripcion de pieza: " << factura.obtenerDescripcionPieza() << endl;
    cout << "cantidad: " << factura.obtenerCantidad() << endl;
    cout << "precio por pieza: " << factura.obtenerPrecioPorPieza() << endl;
    cout << "tasa de IVA: " << factura.obtenerTasaIVA() << endl;
    cout << "tasa de descuento: " << factura.obtenerTasaDescuento() << endl;
    cout << "monto de factura: " << factura.obtenerMontoFactura() << endl;

    return 0;
}