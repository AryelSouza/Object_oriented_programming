#include "ContaCorrenteComun.hpp"

ContaCorrenteComun::ContaCorrenteComun(string nome, int numero, double saldo) : Conta(nome, numero, saldo) {
}

void ContaCorrenteComun::debitar(double valor) {
    Conta::debitar(valor);
}

void ContaCorrenteComun::creditar(double valor) {
    Conta::creditar(valor);
}

void ContaCorrenteComun::extrato() const {
    Conta::extrato();
}

ContaCorrenteComun::~ContaCorrenteComun() {
}

void ContaCorrenteComun::armazenaTransacao(string descricao, double valor) {
    Conta::armazenaTransacao(descricao, valor);
}
