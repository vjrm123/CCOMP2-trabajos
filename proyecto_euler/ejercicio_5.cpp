#include <iostream>

using namespace std;

int main(){
    int contador=1;
    bool controlar = false;

    while(!controlar){
        bool divisible = true;
        for(int i=1; i<=20; i++){
            if(contador % i !=0){
                divisible = false;
                break;
            }
        }
        if(divisible){
            cout<<" el numero pequeño divisible es: "<<contador<<endl;
            controlar = true;
        }
        contador++;
    }
    return 0;
}