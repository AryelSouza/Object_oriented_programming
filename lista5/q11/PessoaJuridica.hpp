#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include "Pessoa.hpp"

class PessoaJuridica : public Pessoa {
    protected:
        string cnpj;
        string nome_fantasia;
        string razao_social;
    public:
        PessoaJuridica(string nome_fantasia, string razao_social, string cnpj);
        string getNomeFantasia();
        string getRazaoSocial();
        string getCnpj();
        void setCnpj(string cnpj);
        void setNomeFantasia(string nome_fantasia);
        void setRazaoSocial(string razao_social);
        void imprime();
};

#endif