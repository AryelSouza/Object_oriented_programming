#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
}

string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getIdade() {
    return this->idade;
}

void Pessoa::imprime() {
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
}