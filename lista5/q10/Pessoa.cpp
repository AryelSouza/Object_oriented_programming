#include "Pessoa.hpp"
#include <iostream>
using namespace std;

Pessoa::Pessoa(string nome){
    this->nome = nome;
}

ostream& operator<<(ostream& os, const Pessoa& p){
    os << "Nome: " << p.nome << endl;
    return os;
}


string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

