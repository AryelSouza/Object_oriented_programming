#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;
#include <string>

class Personagem{

public:

Personagem(string nome,string genero);
void trocaAlma(Personagem &p1,Personagem &p2);
void setSexo(string genero);
string getSexo();
void setNome(string nome);
string getNome();
void displayMessage();
~Personagem();

private:
string nome,genero;

};

#endif