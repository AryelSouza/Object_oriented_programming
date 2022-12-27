#include "Pessoa.hpp"

#include <iostream>
#include <string>

Pessoa::Pessoa() {
    nome = "";
    idade = 0;
    altura = 0;
}

Pessoa::Pessoa(string nome, int idade, float altura) {
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::setAltura(float altura) {
    this->altura = altura;
}

string Pessoa::getNome()const {
    return nome;
}

int Pessoa::getIdade()const {
    return idade;
}

float Pessoa::getAltura()const {
    return altura;
}

void Pessoa::imprime()const {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
}
