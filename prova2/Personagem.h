#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
#include <string>
using namespace std;

class Personagem{
public:
  Personagem(string nomePer);
  Personagem(string nomePer, string papelPer, string filmePer);
  string getNome();
  void setPapel(string papelPer);
  string getPapel();
  void setFilme(string filmePer);
  string getFilme();
  string setNome(string nomePer);
  ~Personagem();

private:
    string nome, papel, filme;
    };
#endif