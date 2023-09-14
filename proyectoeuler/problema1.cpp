#include <iostream>
using namespace std;

int main() {
  int maximo{1000};
  int suma{0};
  for (int i = 2; i < maximo; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      suma += i;
    }
  }
  cout << suma << endl;

  return 0;
}