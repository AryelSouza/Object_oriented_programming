#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

//Implementação

Carro::Carro(string nome, int ano, string cor, string modelo) {
  setMarca(nome);
  setAno(ano);
  setCor(cor);
  setModelo(modelo);
}

void Carro::setMarca(string nome) {
  marca = nome;
}

string Carro::getMarca() {
  return marca;
}

void Carro::setAno(int ano) {
  this->ano = ano;
}


void Carro::setCor(string cor) {
  this->cor = cor;
}

void Carro::setModelo(string modelo) {
  this->modelo = modelo;
}

string Carro::getModelo() {
  return modelo;
}

void Carro::displayMessage() {
  cout << "Marca: " << getMarca() << endl;
  cout << "Ano: " << ano << endl;
  cout << "Cor: " << cor << endl;
  cout << "Modelo: " << modelo << endl;
}

Carro::~Carro() {
  cout << "Objeto destruído" << endl;
}
