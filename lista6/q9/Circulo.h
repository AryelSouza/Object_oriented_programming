#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{

public:
  Circulo() : FormaBidimensional(99999) {}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  ~ " << endl;
  }
  //método que sobscresve o método virtual puro da classe base
  virtual double area() {
    return 3.14 * 2 * 2;
  }
  //método que sobscresve o método virtual puro da classe base
  virtual double perimetro() {
    return 2 * 3.14 * 2;
  }
};

#endif