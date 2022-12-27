#include <iostream>

#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

int main() {

  FormaBidimensional *formas[] = {new Quadrado(), new Circulo(), new Triangulo()};


  for (int i = 0 ; i < 3 ; i++)
  {

    formas[i]->desenhar();
    std::cout << "Área: " << formas[i]->area() << std::endl;
    std::cout << "Perímetro: " << formas[i]->perimetro() << std::endl;
    std::cout << std::endl;
    delete formas[i];
  }

  return 0;
}