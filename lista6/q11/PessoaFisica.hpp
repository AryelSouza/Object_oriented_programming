#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP
#include "Pessoa.hpp"

class PessoaFisica : public Pessoa {
    private:
        string cpf;
        string rg;
        string email;
        string endereco;
        string data_nascimento;
        string estado_civil;
    public:
        PessoaFisica(string nome, int idade, string cpf, string rg, string email, string endereco, string data_nascimento, string estado_civil);
        virtual string getCpf();
        virtual string getRg();
        virtual string getEmail();
        virtual void imprime();
        virtual string getEndereco();
        virtual string getDataNascimento();
        virtual string getEstadoCivil();
};

#endif