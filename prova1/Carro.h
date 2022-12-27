#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro
{

public:
  Carro(string marcaCarro, int anoCarro, string proprietario);
  void setMarca(string marcaCarro);
  string getMarca();
  void setAno(int anoCarro);
  void setProprietario(string proprietario);
  string getProprietario();
  void displayMessage();
  ~Carro();

private:

  string marcaCarro;
  int anoCarro;
  string proprietario;
};

#endif