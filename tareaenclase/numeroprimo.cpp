#include <iostream>
using namespace std;

bool numeroPrimo(int numero) {
  for (int i = 2; i < numero / 2; i++) {
    if (numero % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int distancia{20};
  for (int i = 2; i < distancia; i++) {
    if (numeroPrimo(i)) {
      cout << i << " ";
    }
  }
  return 0;
}