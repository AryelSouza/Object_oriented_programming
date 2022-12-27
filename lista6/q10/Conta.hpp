#ifndef CONTA_HPP
#define CONTA_HPP
#include <iostream>
#include <string>
using namespace std;

//hierarquia de conta
class Conta {
public:
    Conta(string nome, int numero, double saldo);
    virtual void debitar(double valor);
    virtual void creditar(double valor);
    virtual void extrato() const;
    virtual void armazenaTransacao(string descricao, double valor);
protected:
    string nome;
    int numero;
    double saldo;
};

#endif
