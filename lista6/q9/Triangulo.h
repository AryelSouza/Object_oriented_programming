#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo() : FormaBidimensional(3) {}

  virtual void desenhar() {
    cout << "  .   " << endl;
    cout << " / \\ " << endl;
    cout << "/   \\" << endl;
    cout << "~~~~~ " << endl;
  }
  virtual double area() {
    return 2 * 2 / 2;
  }
  virtual double perimetro() {
    return 2 + 2 + 2;
  }
};

#endif