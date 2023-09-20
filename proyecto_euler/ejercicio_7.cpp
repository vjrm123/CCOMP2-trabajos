#include <iostream>
using namespace std;

bool esprimo(int numero){
    if(numero <= 1){
        return false;
    }
    for(int i=2; i*i <= numero; i++){
        if(numero % i ==0){
            return false;
        }
    }
    return true;
}

int main(){

    int numero{1}, contador{0};
    while(contador < 10001){
        numero++;
        if(esprimo(numero)){
            contador++;
        }
    }

    cout <<" el 10 001 primo es: "<< numero <<endl;
    return 0;
}