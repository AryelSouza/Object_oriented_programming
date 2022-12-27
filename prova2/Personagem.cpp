#include "Personagem.h"
#include <iostream>
#include <string>

using namespace std;

Personagem::Personagem(string nomePer) {
  setNome(nomePer);
};

Personagem::Personagem(string nomePer, string papelPer, string filmePer) {
  setNome(nomePer);
  setPapel(papelPer);
  setFilme(filmePer);
};

string Personagem::getNome() {
  return nome;
};

void Personagem::setPapel(string papelPer) {
  this->papel = papelPer;
};

string Personagem::getPapel() {
  return papel;
};

void Personagem::setFilme(string filmePer) {
  this->filme = filmePer;
};

string Personagem::getFilme() {
  return filme;
};

string Personagem::setNome(string nomePer) {
  this->nome = nomePer;
};

Personagem::~Personagem() {
  cout << "Objeto destruído" << endl;
};