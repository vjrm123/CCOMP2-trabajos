#include <iostream>
#include <string>
using namespace std;

class VehiculoMotorizado {
public:
    VehiculoMotorizado(std::string marca, std::string tipoCombustible, int anioFabricacion, std::string color, int capacidadMotor)
        : marca{marca}, tipoCombustible{tipoCombustible}, anioFabricacion{anioFabricacion}, color{color}, capacidadMotor{capacidadMotor} {}

    void establecerMarca(std::string marca) {
        this->marca = marca;
    }

    std::string obtenerMarca() const {
        return marca;
    }

    void establecerTipoCombustible(std::string tipoCombustible) {
        this->tipoCombustible = tipoCombustible;
    }

    std::string obtenerTipoCombustible() const {
        return tipoCombustible;
    }

    void establecerAnioFabricacion(int anioFabricacion) {
        if (anioFabricacion > 0) {
            this->anioFabricacion = anioFabricacion;
        }
    }

    int obtenerAnioFabricacion() const {
        return anioFabricacion;
    }

    void establecerColor(std::string color) {
        this->color = color;
    }

    std::string obtenerColor() const {
        return color;
    }

    void establecerCapacidadMotor(int capacidadMotor) {
        if (capacidadMotor > 0) {
            this->capacidadMotor = capacidadMotor;
        }
    }

    int obtenerCapacidadMotor() const {
        return capacidadMotor;
    }

    void mostrarDetallesVehiculo() const {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Tipo de combustible: " << tipoCombustible << std::endl;
        std::cout << "Año de fabricación: " << anioFabricacion << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Capacidad del motor: " << capacidadMotor << " cc" << std::endl;
    }

private:
    std::string marca;
    std::string tipoCombustible;
    int anioFabricacion;
    std::string color;
    int capacidadMotor;
};

int main() {
    VehiculoMotorizado vehiculo{"Toyota", "Gasolina", 2015, "Rojo", 2000};

    vehiculo.mostrarDetallesVehiculo();

    return 0;
}