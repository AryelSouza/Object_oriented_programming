#include "Agenda.hpp"
#include <iostream>
#include <string>


using namespace std;

Agenda::Agenda(int tPessoas){
    pessoas = new Pessoa[tPessoas];
    qtdePessoas = 0;
}

Agenda::~Agenda(){
    delete[] pessoas;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura){
    Pessoa p(nome, idade, altura);
    pessoas[qtdePessoas] = p;
    qtdePessoas++;
}

void Agenda::armazenaPessoa(const Pessoa &p){
    pessoas[qtdePessoas] = p;
    qtdePessoas++;
}

void Agenda::removePessoa(string nome){
    int pos = buscaPessoa(nome);
    if(pos != -1){
        for(int i = pos; i < qtdePessoas; i++){
            pessoas[i] = pessoas[i+1];
        }
        qtdePessoas--;
    }
}

int Agenda::buscaPessoa(string nome) const{
    for(int i = 0; i < qtdePessoas; i++){
        if(pessoas[i].getNome() == nome){
            return i;
        }
    }
    return -1;
}

void Agenda::imprimePovo() const{
    for(int i = 0; i < qtdePessoas; i++){
        cout << "Pessoa " << i << endl;
        pessoas[i].imprime();
    }
}

void Agenda::imprimePessoa(int i) const{
    if(i < qtdePessoas){
        pessoas[i].imprime();
    }
}

