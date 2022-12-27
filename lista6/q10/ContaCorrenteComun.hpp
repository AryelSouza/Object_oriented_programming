#ifndef CONTACORRENTECOMUN_HPP
#define CONTACORRENTECOMUN_HPP

#include "Conta.hpp"
#include <iostream>
#include <string>
using namespace std;

class ContaCorrenteComun : public Conta {
public:
    ContaCorrenteComun(string nome, int numero, double saldo);
    virtual void debitar(double valor);
    virtual void creditar(double valor);
    virtual void extrato() const;
    virtual ~ContaCorrenteComun();
    virtual void armazenaTransacao(string descricao, double valor);
};

#endif