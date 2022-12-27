#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "Pessoa.hpp"
#include <iostream>
#include <string>

using namespace std;

class Agenda {
    private:
        Pessoa pessoas[10];
        int numPessoas;
    public:
        Agenda();
        void armazenaPessoa(string nome, int idade, float altura);
        void armazenaPessoa(const Pessoa &p);
        void removePessoa(string nome);
        int buscaPessoa(string nome)const;
        void imprimePovo()const;
        void imprimePessoa(int i)const;
};

#endif