#include "PessoaFisica.hpp"
#include <iostream>
#include <string>

using namespace std;

PessoaFisica::PessoaFisica(string nome, int idade, string cpf, string rg, string email, string endereco, string data_nascimento, string estado_civil) : Pessoa(nome, idade) {
    this->cpf = cpf;
    this->rg = rg;
    this->email = email;
    this->endereco = endereco;
    this->data_nascimento = data_nascimento;
    this->estado_civil = estado_civil;
}

string PessoaFisica::getCpf() {
    return this->cpf;
}

string PessoaFisica::getRg() {
    return this->rg;
}

string PessoaFisica::getEmail() {
    return this->email;
}

void PessoaFisica::imprime() {
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "CPF: " << this->cpf << endl;
    cout << "RG: " << this->rg << endl;
    cout << "Email: " << this->email << endl;
    cout << "Endereco: " << this->endereco << endl;
    cout << "Data de Nascimento: " << this->data_nascimento << endl;
    cout << "Estado Civil: " << this->estado_civil << endl;
}

string PessoaFisica::getEndereco() {
    return this->endereco;
}

string PessoaFisica::getDataNascimento() {
    return this->data_nascimento;
}

string PessoaFisica::getEstadoCivil() {
    return this->estado_civil;
}

