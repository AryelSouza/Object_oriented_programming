#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(16,40);

    cout << "Hora inicial: ";

  t.printUniversal();
    t.printStandard();

    cout << "Hora final: ";

    t.tick();
    t.printUniversal();
    t.printStandard();


  return 0;
}
