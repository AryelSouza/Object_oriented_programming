#include "troca.h"
#include <iostream>
#include <string>
using namespace std;

Personagem::Personagem(string nomePer, string genero) {
  setNome(nomePer);
  setSexo(genero);
}

void trocaAlma(Personagem &p1, Personagem &p2) {
  Personagem aux = p1;
  p1 = p2;
  p2 = aux;
}

void Personagem::setSexo(string genero) {
  this->genero = genero;
}

string Personagem::getSexo() {
  return genero;
}

void Personagem::setNome(string nomePer) {
  this->nome = nomePer;
}

string Personagem::getNome() {
  return nome;
}

void Personagem::displayMessage() {
  cout << "Nome: " << getNome() << endl;
  cout << "Sexo: " << genero << endl;
}

Personagem::~Personagem() {
  cout << "Objeto destruído" << endl;
}