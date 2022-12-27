#ifndef CONTAPOUPANCA_HPP
#define CONTAPOUPANCA_HPP

#include "Conta.hpp"

class ContaPoupanca : public Conta {
private:
//aniversario da conta
    int dia;
    int mes;
    int ano;
public:
    ContaPoupanca(string nome, int numero, double saldo, int dia, int mes, int ano);
    virtual void debitar(double valor);
    virtual void creditar(double valor);
    virtual void extrato() const;
    virtual void armazenaTransacao(string descricao, double valor);

};

#endif
