#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(string marcaCarro, int anoCarro, string proprietario) {
  setMarca(marcaCarro);
  setAno(anoCarro);
  setProprietario(proprietario);
}

void Carro::setMarca(string marcaCarro) {
  this->marcaCarro = marcaCarro;
}

string Carro::getMarca() {
  return marcaCarro;
}

void Carro::setAno(int anoCarro) {
  this->anoCarro = anoCarro;
}

void Carro::setProprietario(string proprietario) {
  this->proprietario = proprietario;
}


string Carro::getProprietario() {
  return proprietario;
}

void Carro::displayMessage() {
  cout << "Marca: " << getMarca() << endl;
  cout << "Ano: " << anoCarro << endl;
  cout << "Proprietário: " << proprietario << endl;
}

Carro::~Carro() {
  cout << "Objeto destruído" << endl;
}