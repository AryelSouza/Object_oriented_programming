#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>

using namespace std;


class Pessoa {
    private:
        string nome;
        int idade;
        float altura;
    public:
        Pessoa();
        Pessoa(string nome, int idade, float altura);
        void setNome(string nome);
        void setIdade(int idade);
        void setAltura(float altura);
        string getNome()const;
        int getIdade()const;
        float getAltura()const;
        void imprime()const;
};

#endif