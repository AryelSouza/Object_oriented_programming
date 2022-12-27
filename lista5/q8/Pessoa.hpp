#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
#include <iostream>
using namespace std;

class Pessoa {
    //sobrecarga do <<
    friend ostream& operator<<(ostream& os, const Pessoa& p); 
    protected:
    string nome;
    public:
        Pessoa(string nome);
        string getNome();
        void setNome(string nome);
};

#endif