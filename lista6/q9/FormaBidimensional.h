#ifndef FORMABI_H
#define FORMABI_H 

//classe abstrata

class FormaBidimensional 
{
public:
  FormaBidimensional(int numLados) : numLados(numLados) { }


  virtual void desenhar() = 0;

  virtual double area() = 0;

  virtual double perimetro() = 0;

private:
  int numLados;
};

#endif