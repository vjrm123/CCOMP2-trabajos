#include <iostream>

using namespace std;

int sumarmultiplos(int numero){

    int suma=0;
    for(int i=2; i<=numero; i++){
        if(i%3==0 || i%5==0){
            suma+=i;
        }
    }
    return suma;
}

int main(){

    int numero=20;
    cout<<"la suma de los multiplos de 3 o 5: "<<sumarmultiplos(numero)<<endl;

    return 0;
}