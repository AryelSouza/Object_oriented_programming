#include <iostream>
using namespace std;

int main() {
  cout << "Valores ASCII de 33 até 126:" << endl;

  for (int i = 33; i <= 126; i++) {
    cout << "Valor ASCII de " << (char)i << ": " << i << endl;
  }

  return 0;
}