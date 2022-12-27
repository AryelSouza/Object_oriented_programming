#include "Agenda.hpp"
#include <iostream>
#include <string>


using namespace std;

Agenda::Agenda() {
    numPessoas = 0;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura) {
    if (numPessoas < 10) {
        pessoas[numPessoas].setNome(nome);
        pessoas[numPessoas].setIdade(idade);
        pessoas[numPessoas].setAltura(altura);
        numPessoas++;
    }
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    if (numPessoas < 10) {
        pessoas[numPessoas] = p;
        numPessoas++;
    }
}

void Agenda::removePessoa(string nome) {
    int i = buscaPessoa(nome);
    if (i != -1) {
        for (int j = i; j < numPessoas - 1; j++) {
            pessoas[j] = pessoas[j + 1];
        }
        numPessoas--;
    }
}

int Agenda::buscaPessoa(string nome)const {
    for (int i = 0; i < numPessoas; i++) {
        if (pessoas[i].getNome() == nome) {
            return i;
        }
    }
    return -1;
}

void Agenda::imprimePovo()const {
    for (int i = 0; i < numPessoas; i++) {
        cout << "Pessoa " << i << ":" << endl;
        pessoas[i].imprime();
    }
}

void Agenda::imprimePessoa(int i)const {
    if (i >= 0 && i < numPessoas) {
        pessoas[i].imprime();
    }
}

