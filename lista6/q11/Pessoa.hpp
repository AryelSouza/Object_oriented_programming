#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>

using namespace std;
class Pessoa {
    protected:
        string nome;
        int idade;
    public:
        Pessoa(string nome, int idade);
        virtual string getNome();
        virtual int getIdade();
        virtual void imprime();
};

#endif