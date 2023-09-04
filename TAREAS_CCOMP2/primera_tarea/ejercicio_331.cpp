/**/



#include <iostream>
using namespace std;

int main() {
    float millas_totales, precio_gasolina, millas_por_galon, costo_estacionamiento, peajes, costo_diario;

    cout << "**** Bienvenido  al calculador de ahorros de carpooling ****" << endl;
    cout << "ingresa la siguiente informacion:" << endl;
    cout << "Millas totales conducidas por dia: ";
    cin >> millas_totales;
    cout << "Precio por galon de gasolina: $";
    cin >> precio_gasolina;
    cout << "Millas por galon: ";
    cin >> millas_por_galon;
    cout << "Costo diario de estacionamiento: $";
    cin >> costo_estacionamiento;
    cout << "Peajes diarios: $";
    cin >> peajes;

    costo_diario = (millas_totales / millas_por_galon) * precio_gasolina + costo_estacionamiento + peajes;

    cout << "Tu costo diario de conducir al trabajo es de: $" << costo_diario << endl;

    return 0;
}