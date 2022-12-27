#include "Conta.hpp"

Conta::Conta(string nome, int numero, double saldo) {
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
}

void Conta::debitar(double valor) {
    saldo -= valor;
}

void Conta::creditar(double valor) {
    saldo += valor;
}

void Conta::extrato() const {
    cout << "Nome: " << nome << endl;
    cout << "Numero: " << numero << endl;
    cout << "Saldo: " << saldo << endl;
}

void Conta::armazenaTransacao(string descricao, double valor) {
    cout << "Descricao: " << descricao << endl;
    cout << "Valor: " << valor << endl;
    if (valor > 0) {
        cout << "Credito" << endl;
    } else {
        cout << "Debito" << endl;
    }
}