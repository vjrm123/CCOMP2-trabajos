#include <iostream>
#include <string>

using namespace std;

bool espalindromo(int numero){
    string cadena = to_string(numero);
    int longitud = cadena.length();

    for(int i=0; i<longitud; i++){
        if(cadena[i] != cadena[longitud-1-i]){
            return false;
        }
    }
    return true;
}

int maximopalindromo(int numero){
    int maximo=0,producto;

    for(int i=100; i<numero; i++){
        for(int j=100; j<numero; j++){
            producto = i*j;
            if(espalindromo(producto) && producto > maximo){
                maximo = producto;
            }
        }
    }
    return maximo;
}

int main(){
    int numero = 1000;
    cout<<"el producto mayor palindromo es: "<<maximopalindromo(numero)<<endl;
    return 0;
}