/*(tabla) utilizando las técnicas de este capítulo, escriba un programa que calcule el área
de superficie y el volumen de cubos con longitudes de cara de 0 a 4 cm. utilice pestañas para 
imprimir la siguiente tabla de valores cuidadosamente formateada.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << setw(15) << "Longitud " << setw(15) << " Area de Superficie" << setw(12) << " Volumen" << endl;


    for (int longitud = 0; longitud <= 4; longitud++) {
        int area = 6 * longitud * longitud;
        int volumen = longitud * longitud * longitud;


        cout << setw(10) << longitud << setw(15) << area << setw(18) << volumen << endl;
    }

    return 0;
}