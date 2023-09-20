#include <iostream>
using namespace std;


bool esprimo(int numero){
    if(numero <=1){
        return false;
    }
    for(int i=2; i*i<=numero; i++){
        if(numero % i ==0){
            return false;
        }
    }
    return true;
}

int sumarprimos(long long numero){
    long long suma{0};
    for(int i=2; i<numero; i++){
        if(esprimo(i)){
            suma+=i;
        }
    }
    return suma;
}

int main(){
    long long numero = 2000000;
    cout<<"la suma de los numeros primos es: "<<sumarprimos(numero)<<endl;

    return 0;
}