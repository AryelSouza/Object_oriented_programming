#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro
{

public:
  Carro(string nome, int ano, string cor, string modelo);
  void setMarca(string nome);
  string getMarca();
  void setAno(int ano);
  void setCor(string cor);
  void setModelo(string modelo);
  string getModelo();
  void displayMessage();
  ~Carro();

private:

  string marca;
  int ano;
  string cor;
  string modelo;
};

#endif



