#include <iostream>
using namespace std;
bool numeroPerfecto(int numero) {
  int suma{0};
  for (int i = 1; i < numero; i++) {
    if (numero % i == 0) {
      suma += i;
    }
  }
  return suma == numero;
}

int main() {

  
  int n;
  cout << "ingrese l cantidad de numero que deseas: ";
  cin >> n;

  
  int numero{2};
  int cantidad{0};
  while (cantidad < n) {
    if (numeroPerfecto(numero)) {
      cout << numero << " ";
      cantidad++;
    }
    numero++;
  }

  
  return 0;
}