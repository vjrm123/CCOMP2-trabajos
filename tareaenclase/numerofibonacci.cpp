#include <iostream>
using namespace std;

int main() {
  int anterior{0};
  int actual{1};
  int siguiente;
  for (int i = 0; i < 10; i++) {
    cout << anterior << " ";
    siguiente = actual + anterior;
    anterior = actual;
    actual = siguiente;
  }
  return 0;
}