#ifndef CONTACORRENTELIMITE_HPP
#define CONTACORRENTELIMITE_HPP
#include "Conta.hpp"

class ContaCorrenteLimite : public Conta {
public:
    ContaCorrenteLimite(string nome, int numero, double saldo, double limite);
    virtual void debitar(double valor);
    virtual void creditar(double valor);
    virtual void extrato() const;
    virtual void armazenaTransacao(string descricao, double valor);
private:
    double limite;
};

#endif