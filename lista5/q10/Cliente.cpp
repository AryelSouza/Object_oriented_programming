#include "Cliente.hpp"
#include <iostream>

using namespace std;

Cliente::Cliente(string nome, string cpf, string endereco, string telefone) : PessoaFisica(nome, cpf){
    this->endereco = endereco;
    this->telefone = telefone;
}

string Cliente::getEndereco(){
    return endereco;
}

string Cliente::getTelefone(){
    return telefone;
}

void Cliente::setEndereco(string endereco){
    this->endereco = endereco;
}

void Cliente::setTelefone(string telefone){
    this->telefone = telefone;
}

void Cliente::imprime(){
    cout << "Nome: " << getNome() << endl;
    cout << "CPF: " << getCpf() << endl;
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Telefone: " << getTelefone() << endl;
}

ostream& operator<<(ostream& os, Cliente& c){
    os << "Nome: " << c.getNome() << endl;
    os << "CPF: " << c.getCpf() << endl;
    os << "Endereco: " << c.getEndereco() << endl;
    os << "Telefone: " << c.getTelefone() << endl;
    return os;
}
