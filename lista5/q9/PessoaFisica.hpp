#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include "Pessoa.hpp"

class PessoaFisica : public Pessoa {
    private:
        string cpf;
        string nome;
    public:
        PessoaFisica(string nome, string cpf);
        string getNome();
        string getCpf();
        void setCpf(string cpf);
        void setNome(string nome);
        void imprime();
};

#endif