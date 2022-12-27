#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(string nome, int numero, double saldo, int dia, int mes, int ano) : Conta(nome, numero, saldo) {
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void ContaPoupanca::debitar(double valor) {
    Conta::debitar(valor);
}

void ContaPoupanca::creditar(double valor) {
    Conta::creditar(valor);
}

void ContaPoupanca::extrato() const {
    Conta::extrato();
    cout << "Aniversario: " << dia << "/" << mes << "/" << ano << endl;
}


void ContaPoupanca::armazenaTransacao(string descricao, double valor) {
    Conta::armazenaTransacao(descricao, valor);
}
