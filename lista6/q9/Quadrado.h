#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado() : FormaBidimensional(4) {}

  virtual void desenhar() {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }
  virtual double area() {
    return 2 * 2;
  }
  virtual double perimetro() {
    return 4 * 2;
  }
  
};

#endif