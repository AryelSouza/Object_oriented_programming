#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>


using namespace std;

class Pessoa{
public:
    Pessoa(string nome, string cpf);
    void CPFValido();
    void setNome(string nome);
    void setCpf(string cpf);
    string getNome();
    string getCpf();
    void imprimir();
private:
    string nome;
    string cpf;
};



#endif

