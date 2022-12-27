#include "Retangulo.h"
#include <iostream>
#include <string>

using namespace std;


Retangulo::Retangulo(){
    largura = 1;
    altura = 1;
}

Retangulo::Retangulo(double largura, double altura){
    this->largura = largura;
    this->altura = altura;
}

void Retangulo::setLargura(double largura){
    this->largura = largura;
}

void Retangulo::setAltura(double altura){
    this->altura = altura;
}

double Retangulo::getLargura(){
    return largura;
}

double Retangulo::getAltura(){
    return altura;
}

double Retangulo::getArea(){
    return largura * altura;
}

double Retangulo::getPerimetro(){
    return 2 * (largura + altura);
}

void Retangulo::imprimir(){
    cout << "Largura: " << largura << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimetro: " << getPerimetro() << endl;
}
