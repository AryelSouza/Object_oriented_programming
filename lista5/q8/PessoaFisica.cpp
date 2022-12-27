#include "PessoaFisica.hpp"
#include <iostream>
using namespace std;

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome){
    this->cpf = cpf;
}

string PessoaFisica::getNome(){
    return nome;
}

string PessoaFisica::getCpf(){
    return cpf;
}

void PessoaFisica::setCpf(string cpf){
    this->cpf = cpf;
}

void PessoaFisica::setNome(string nome){
    this->nome = nome;
}

void PessoaFisica::imprime(){
    cout << "Nome: " << getNome() << endl;
    cout << "CPF: " << getCpf() << endl;
}