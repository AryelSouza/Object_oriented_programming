#include "PessoaJuridica.hpp"
#include <iostream>
using namespace std;

PessoaJuridica::PessoaJuridica(string nome_fantasia, string razao_social, string cnpj) : Pessoa(nome_fantasia){
    this->cnpj = cnpj;
    this->nome_fantasia = nome_fantasia;
    this->razao_social = razao_social;
}

string PessoaJuridica::getNomeFantasia(){
    return nome_fantasia;
}

string PessoaJuridica::getRazaoSocial(){
    return razao_social;
}

string PessoaJuridica::getCnpj(){
    return cnpj;
}

void PessoaJuridica::setCnpj(string cnpj){
    this->cnpj = cnpj;
}

void PessoaJuridica::setNomeFantasia(string nome_fantasia){
    this->nome_fantasia = nome_fantasia;
}

void PessoaJuridica::setRazaoSocial(string razao_social){
    this->razao_social = razao_social;
}

void PessoaJuridica::imprime(){
    cout << "Nome Fantasia: " << getNomeFantasia() << endl;
    cout << "Razao Social: " << getRazaoSocial() << endl;
    cout << "CNPJ: " << getCnpj() << endl;
}