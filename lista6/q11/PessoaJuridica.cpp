#include "PessoaJuridica.hpp"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica(string nome, int idade, string cnpj, string razaoSocial, string email, string endereco, string inscricaoEstadual) : Pessoa(nome, idade) {
    this->cnpj = cnpj;
    this->razaoSocial = razaoSocial;
    this->email = email;
    this->endereco = endereco;
    this->inscricaoEstadual = inscricaoEstadual;
}

string PessoaJuridica::getCnpj() {
    return this->cnpj;
}

string PessoaJuridica::getRazaoSocial() {
    return this->razaoSocial;
}

string PessoaJuridica::getEmail() {
    return this->email;
}

void PessoaJuridica::imprime() {
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "CNPJ: " << this->cnpj << endl;
    cout << "Razao Social: " << this->razaoSocial << endl;
    cout << "Email: " << this->email << endl;
    cout << "Endereco: " << this->endereco << endl;
    cout << "Inscricao Estadual: " << this->inscricaoEstadual << endl;
}

string PessoaJuridica::getEndereco() {
    return this->endereco;
}

string PessoaJuridica::getInscricaoEstadual() {
    return this->inscricaoEstadual;
}

