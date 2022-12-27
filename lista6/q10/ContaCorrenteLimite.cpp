#include "ContaCorrenteLimite.hpp"
#include <iostream>
#include <string>
using namespace std;

ContaCorrenteLimite::ContaCorrenteLimite(string nome, int numero, double saldo, double limite) : Conta(nome, numero, saldo) {
    this->limite = limite;
}

void ContaCorrenteLimite::debitar(double valor) {
    if (valor > saldo + limite) {
        cout << "Saldo insuficiente" << endl;
    } else {
        saldo -= valor;
        armazenaTransacao("Debito", valor);
    }
}

void ContaCorrenteLimite::creditar(double valor) {
    saldo += valor;
    armazenaTransacao("Credito", valor);
}

void ContaCorrenteLimite::extrato() const {
    cout << "Nome: " << nome << endl;
    cout << "Numero: " << numero << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Limite: " << limite << endl;
}

void ContaCorrenteLimite::armazenaTransacao(string descricao, double valor) {
    cout << "Descricao: " << descricao << endl;
    cout << "Valor: " << valor << endl;
    if (valor > 0) {
        cout << "Credito" << endl;
    } else {
        cout << "Debito" << endl;
    }
}


