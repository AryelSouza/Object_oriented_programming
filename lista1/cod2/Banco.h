#include <iostream>
#include <string>
#ifndef BANCO_H
#define BANCO_H
using namespace std;



class ContaBanco{
public:
    ContaBanco(string nome, int numero, double saldo);
    void setNome(string nome);
    void setNumero(int numero);
    void setSaldo(double saldo);
    string getNome();
    int getNumero();
    float getSaldo();
    void imprimir();
    void creditar();
    void debitar();
private:
    string nome;
    int numero;
    double saldo;
};

#endif
