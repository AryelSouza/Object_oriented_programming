#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include <string>

using namespace std;

class Retangulo{
public:
    Retangulo();
    Retangulo(double largura, double altura);
    void setLargura(double largura);
    void setAltura(double altura);
    double getLargura();
    double getAltura();
    double getArea();
    double getPerimetro();
    void imprimir();
private:

    double largura;
    double altura;
};
#endif