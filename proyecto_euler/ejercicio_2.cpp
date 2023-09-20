#include <iostream>

using namespace std;

int sumaparfibo(int numero){
    int suma=0,temporal=0;
    int x=1,y=1;

    while(y<=numero){
        if(y % 2 == 0){
            suma+=y;
        }
        temporal=x+y;
        x=y;
        y=temporal;
    }
    return suma;
}

int main(){
    int numero=89;
    cout<<"la suma de los fibo pares son: "<<sumaparfibo(numero)<<endl;
    
    return 0;
}