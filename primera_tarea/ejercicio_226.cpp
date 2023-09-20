/*(patrón de tablero de ajedrez) muestra el siguiente patrón de tablero de ajedrez con ocho declaraciones,
luego muestra el mismo patrón usando la menor cantidad de declaraciones posible.*/

#include <iostream>
using namespace std;

int main() {
    cout << "* * * * * * * *"<<endl;
    cout << " * * * * * * * *"<<endl;
    cout << "* * * * * * * *"<<endl;
    cout << " * * * * * * * *"<<endl;
    cout <<"* * * * * * * *"<<endl;
    cout << " * * * * * * * *"<<endl;
    cout << "* * * * * * * *"<<endl;
    cout << " * * * * * * * *"<<endl;


    cout<<"DE AQUI ES OTRA OPCIOOOOOOOOON"<<endl; 

    for(int i = 0; i < 8; i++) {
        if(i % 2 == 0) {
            cout << "* * * * * * * *\n";
        } else {
            cout << " * * * * * * * *\n";
        }
    }
    return 0;

}